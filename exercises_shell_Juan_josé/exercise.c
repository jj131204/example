#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#define SEPARATORS " ,!?\'\"\n\t"

int ejecutar(char **tok);
void token(char *n, char **tok);

int main(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;
	char *tok[100];

	while (1)
	{
		printf("$");
		num = getline(&line, &bufsize, stdin);
		if (num == EOF)
		{
			return (0);
		}
		token(line, tok);
		ejecutar(tok);
	}

	return (0);
}

void token(char *n, char **tok)
{
	char *token;
	int count = 0;

	token = strtok(n, SEPARATORS);
	tok[count] = token;
	for (count = 1; token != NULL; count++)
	{
		token = strtok(NULL, SEPARATORS);
		tok[count] = token;
	}
}

int ejecutar(char **tok)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execve(tok[0], tok, NULL) == -1)
		{
	`		perror("Error:");
		}
		return (1);
	}

	else if (pid < 0)
	{
		perror("Error");
		return (1);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (0);
}

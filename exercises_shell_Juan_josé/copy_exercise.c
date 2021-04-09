#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define SEPARATORS " ,!?\'\"\n\t"

int ejecutar(char **ar);
void token(char *n, char **tok);
void path(char *pat);
void sigint_handler(int sigint);

int _putchar(char c)
{
        return (write(1, &c, 1));
}

int main()
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;
	char *tok[100];

	 signal(SIGINT, sigint_handler);
	while(1)
	{
		printf("$");
		num = getline(&line, &bufsize, stdin);
		if (num == EOF)
		{
			free(line);
			return (0);
		}
		printf("%s", line);
	
		/*for(count = 0; line[count] == ' '; count++)
*/
		token(line, tok);
	
		ejecutar(tok);

		/*path(tok[0]);
*/	}
	free(line);
	return(0);
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
/*int status;*/

pid = fork();

	if(pid == 0)
	{
	if (execve(tok[0], tok, NULL) == -1)
	{
		perror("Error:");
	}
		return (1);
	}

	else if (pid < 0)
	{
		perror("Error");
		return(0);
	}
	else
	{

		wait(NULL);
/*		do
		{
			waitpid(pid, &status, WUNTRACED);
		}while (!WIFEXITED(status) && !WIFSIGNALED(status));

*/
	}
	return(1);
}

void sigint_handler(int sigint)
{
        (void)sigint;

        signal(SIGINT, sigint_handler);
        write(STDOUT_FILENO, "\n$ ", 3);
        fflush(stdout);
}

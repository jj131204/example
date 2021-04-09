#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

int main(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;
	char *tok[100];

	signal(SIGINT, sigint_handler);

	while (1)
	{

		_putchar('$');
		num = getline(&line, &bufsize, stdin);
		if (num == EOF)
		{
			free(line);
			return (0);
		}

		token(line, tok);
		ejecutar(tok);
		


	}
	free(line);
	return (0);
}
void sigint_handler(int sigint)
{
        (void)sigint;

        signal(SIGINT, sigint_handler);
        write(STDOUT_FILENO, "\n$ ", 3);
        fflush(stdout);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *linereader(void)
{
	char *line = NULL;
	int func_return = 0;
	size_t buffer = 0;

	func_return = getline(&line, &buffer, stdin);

	if (func_return == EOF)
	{
		free(line);
		exit(0);
	}
	return (line);
}
int main(int argc, char *argv[])
{
	char *str = "#funfactC$ ";
	char *line = NULL;
	char **args = NULL;
	pid_t looper;
   
	do{
		if(isatty(STDIN_FILENO))
		{
			printf("%s", str);
		}
		line = linereader();
		
	   } while (looper >0);
	return(0);
}

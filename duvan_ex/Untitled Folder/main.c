#include "header.h"

int main(void)
{
	int sign = 1;
	char *line = NULL;
	char **tokens = NULL;
  	char *str = "#Caribe_isFun ";
	int condition = 1;

	signal(SIGINT, sigint_handler);

	while(condition)
	{
			if (isatty(STDIN_FILENO)) 
		{
			write(STDOUT_FILENO, str, 14); 
				
		}	
			line = line_reader();
			sign = semicolon(line);
			tokens = line_parser(line);
			condition = line_validator(tokens);
			
			if (condition == 1 && sign == 1)
			{
				condition = executing(tokens, line);
			}
			free(line);
			free(tokens);
			
	}
	return (EXIT_SUCCESS);
			
}	

void sigint_handler(int sigint)
{
	(void)sigint;

	signal(SIGINT, sigint_handler);
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);
}

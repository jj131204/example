#include "header.h"

char **line_parser(char *line)
	
{
	char *slice;
	char **tokens;
	int position = 0;
	int buffer = 1024;

	tokens = malloc(buffer * sizeof(char *));

	if(!tokens)
	{
			fprintf(stderr, "lsh: allocation erros\n");
			exit(EXIT_FAILURE);
	}
	slice = strtok(line, " \t\n\r");
	while(slice)
	{
		tokens[position] = slice;
		position++;

		slice = strtok(NULL, " \t\n\r");
	}
	tokens[position] = NULL;
	return (tokens);
			
}

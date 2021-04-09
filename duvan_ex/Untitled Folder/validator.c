#include "header.h"

int line_validator(char **tokens)
{
	if (tokens[0] == NULL)
	{
		return (1);
	}
	if (_strcmp(tokens[0], "exit") == 0)
	{
		return (0);
	}
	if (_strcmp(tokens[0], "env") == 0)
	{
		_env (tokens);
	}
	if (_strcmp(tokens[0], "cd") == 0)
	{
		return (_cd(tokens));
	}
	return (1);
	
}

	

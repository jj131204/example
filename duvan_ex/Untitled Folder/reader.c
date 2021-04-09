#include "header.h"

char *line_reader(void)
{
	char *line = NULL;
	size_t buffsize = 0;
	ssize_t container = 0;

	container = getline(&line, &buffsize, stdin);

	if (container == -1)
	{
		free(line);
		exit(0);
	}
	return (line);
}




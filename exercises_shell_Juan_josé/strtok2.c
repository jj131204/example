#include <string.h>
#include <stdio.h>

int main () {

char *line = NULL;
size_t bufsize = 0;
char *token;
int str;
int count = 0;

	printf("$");

	str = getline(&line, &bufsize, stdin);

	if (str == EOF)
	{
		return (0);
	}

	/* get the first token */
	token = strtok(line, " ");


	/* walk through other tokens */
	while( token != NULL )
	{
		printf( "[%d] %s\n", count, token);
		token = strtok(NULL, " ");
		count++;
	}

   return(0);
}

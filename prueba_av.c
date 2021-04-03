#include <stdio.h>
#include <stdlib.h>

#define STDIN 0
#define DELIMITERS " \n\t\r\a"

int main()
{

	char *line = 0;
	size_t bufsize = 0;
	/*int num;*/
	 getline(&line, &bufsize, stdin);
	
	printf("%s", line);

	return (0);
}

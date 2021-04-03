#include <stdio.h>
#include  <stdlib.h>

int main()
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;
	printf("$");
	num = getline(&line, &bufsize, stdin);
	if (num == EOF)
	{
		return (0);
	}
	printf("%s\n", line);
	
	/*printf("%d\n", num);
	printf("%s\n", line);*/
	return (0);
}

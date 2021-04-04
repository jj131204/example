#include <stdio.h>
#include  <stdlib.h>
#include  <string.h>

char array(char *n);
int main()
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;
	int count = 0;
	char function, *prueba;
	printf("$");
	num = getline(&line, &bufsize, stdin);
	if (num == EOF)
	{
		return (0);
	}
	prueba =  line;

	/*function = array(prueba);*/
	printf("%c\n", function);
	printf("%s\n", prueba);
	printf("%d\n", num);
	printf("%s\n", line);
	return (0);

}

char array(char *n)
{
	int count = 1;
	
	while (n[count])
	{	
		count++;
	}
/*	printf("[%c], [%d] ", n[count], count);*/
	return(*n);
}

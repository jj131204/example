#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int myget(void)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

   fp = fopen("/etc/motd", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

   while ((read = getline(&line, &len, fp)) != -1) {
        printf("Retrieved line of length %zu :\n", read);
        printf("%s", line);
    }

   free(line);
    exit(EXIT_SUCCESS);
}

int main()
{
	printf("%i\n");
	myget();
}

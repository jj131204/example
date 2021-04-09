#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 *
 * execve(argv[0], argv, NULL) - esto hace que se ejecute otro programa.
 * 
 * la ejecución no vuelve a continuar con el resto del programa si funciona.
 */
int main()
{

	char *argv[] = {"/bin/ls", "-l", NULL};

	printf("Before execve\n");

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}

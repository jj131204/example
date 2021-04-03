#include <stdio.h>

/**
 * prueba arguentos recividos.
 *
 *
 */

int main(int av, char **ac)
{
	int count = 1;
	if (!*ac)
		return (0);

	if(av)
	{
		while(ac[count] != '\0')
		{
			printf("%s [ %d]\n", ac[count], count);
			count++;
		}
	}
	return (0);
}

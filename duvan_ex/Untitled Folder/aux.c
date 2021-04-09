#include "header.h"

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int _strcmp(char *s1, char *s2)
{
	char c1, c2;

	do{
		c1 = *s1++;
		c2 = *s2++;

		if (c1 == '\0')
		{
			return (c1 - c2);
		}
	}while (c1 == c2);

	return (c1 - c2);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int r = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[r])
	{
		dest[i] = src[r];

		i++;
		r++;
	}
	dest[i] = '\0';

	return (dest);
}

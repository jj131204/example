#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define SEPARATORS " ,!?\'\"\n\t\"


int main(void);
void token(char *line, char **tok);
int ejecutar(char *tok[]);
int _putchar(char c);
void path(char *path);

/**
 * string functions
 */
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);


#endif

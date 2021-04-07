#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#define SEPARATORS " ,!?\'\"\n\t"


int main(void);
void token(char *line, char **tok);
int ejecutar(char *tok[]);
int _putchar(char c);

#endif

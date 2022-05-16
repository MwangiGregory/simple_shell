#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void _putchar(char *s);
void split_string(char *line, char **strings, char *delim);
int count_tokens(char *buf);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int count_dirs(char *path);
char **create_arr_of_dirs(char *path);
#endif

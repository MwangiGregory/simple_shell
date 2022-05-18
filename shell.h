#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int count_tokens(char *buf);
void _putchar(char *s);
void split_string(char *line, char **strings, char *delim);

#endif

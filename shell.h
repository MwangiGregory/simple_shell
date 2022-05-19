#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <sys/wait.h>

extern char **environ;

void interactive_mode(char **dirs);
void _putchar(char *s);
void split_string(char *line, char **strings, char *delim);
int count_tokens(char *buf);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int count_dirs(char *path);
char **create_arr_of_dirs(char *path);
char **command_search(char *command, char **dirs);
char *_strcat(char *dest, char *src);
char *_getenv(char *name);
void execute_command(char **arr);
void __exit(int status);
void built_ins(char *bi);
int _strcmp(char *s1, char *s2);
void env(void);
#endif

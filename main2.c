#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

/**
 * pid_zero - when my_pid == 0
 * @tokens: array of string tokens
 * Return: nothing
 */
void pid_zero(char **tokens)
{
	if (execve(tokens[0], tokens, NULL) == -1)
	{
		perror("Unable to execute");
		_exit(0);
	}
	_exit(0);
}

/**
 * main - entry point
 * Return: Always zero
 */
int main(void)
{
	char *prompt_text = "$ ";
	char *buf = NULL;
	size_t inp_size = 0;
	char **tokens;
	int i, status;
	pid_t my_pid;

	/*infinte loop as long as prompt_text is valid*/
	while (prompt_text)
	{
		_putchar(prompt_text);
		if (getline(&buf, &inp_size, stdin) == -1)
		{
			free(buf);
			perror("Failure to read line");
		}
		/*change newline char to null char*/
		for (i = 0; buf[i]; i++)
		{
			if (buf[i] == '\n')
				buf[i] = '\0';
		}

		/*TODO: free this memory*/
		tokens = malloc(count_tokens(buf) * sizeof(char *));
		split_string(buf, tokens, " ");

		my_pid = fork();
		if (my_pid == -1)
		{
			perror("Unable to create child process");
			continue;
		}
		if (my_pid == 0)
			pid_zero(tokens);
		else
			wait(&status);
		free(tokens);
	}
	return (0);
}

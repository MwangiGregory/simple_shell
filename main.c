#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

int count_tokens(char *buf);

/**
 * main - entry point
 * Return: Always zero
 */
int main(void)
{
	char *prompt_text = "$";
	char *buf = NULL;
	size_t inp_size = 0;
	char **strings;
	(void)strings;
	/*infinte loop as long as prompt_text is valid*/
	while (prompt_text)
	{
		_putchar(prompt_text);
		if (getline(&buf, &inp_size, stdin) == -1)
		{
			free(buf);
			perror("\nFailure to read line: ");
		}

		printf("%d\n",count_tokens(buf));
		
	}
	return (0);
}
/**
 * count_strings - finds the number of words/token in string
 * pointed to by buf
 * @buf: pointer to a string
 * Return: number of tokens in string buf
 */
int count_tokens(char *buf)
{
	int i = 0;
	int no_of_tokens = 1;/*min no. of strings will always be 1*/
	
	while (buf[i])
	{
		if (buf[i] == ' ')
			no_of_tokens++;

		i++;
	}
	return (no_of_tokens);
}

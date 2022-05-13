#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

/**
 * main - entry point
 * Return: Always zero
 */
int main(void)
{
	char *prompt_text = "$";
	char *buf = NULL;
	size_t inp_size = 0;
	char **tokens;
	int i;

	/*infinte loop as long as prompt_text is valid*/
	while (prompt_text)
	{
		_putchar(prompt_text);
		if (getline(&buf, &inp_size, stdin) == -1)
		{
			free(buf);
			perror("\nFailure to read line: ");
		}

		/*TODO: free this memory*/
		tokens = malloc(count_tokens(buf) * sizeof(char *));
		split_string(buf, tokens, " ");
	}
	return (0);
}

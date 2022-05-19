#include "shell.h"

/**
 * interactive_mode - runs an interactive shell
 * Return: Always zero
 */
void interactive_mode(char **dirs)
{
	int i;
	size_t inp_size = 0;
	char *prompt_text = "($)", *buf = NULL, **command;

	/*infinte loop as long as prompt_text is valid*/
	while (prompt_text)
	{
		_putchar(prompt_text);
		if (getline(&buf, &inp_size, stdin) == -1)
		{
			free(buf);
			perror("Failure to read line");
			continue;
		}
		/*change newline char to null char*/
		for (i = 0; buf[i]; i++)
		{
			if (buf[i] == '\n')
				buf[i] = '\0';
		}
		built_ins(buf);
		command = command_search(buf, dirs);
		if (!command)
		{
			perror("./hsh");
			continue;
		}
		execute_command(command);
	}
}

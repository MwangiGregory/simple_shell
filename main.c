#include "shell.h"

/**
 * main - entry point to hsh
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, anything else on failure
 */
int main(int argc, char **argv)
{
	char *path_var, **dirs, **command;

	path_var = _getenv("PATH");
	dirs = create_arr_of_dirs(path_var);

	if (argc > 1)
	{
		command = command_search(argv[1], dirs);
		if (!command)
		{
			perror("command not found");
			__exit(EXIT_FAILURE);
		}
		execute_command(command);
		__exit(0);
	}
	else
	{
		interactive_mode(dirs);
	}
	return (0);
}

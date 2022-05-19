#include "shell.h"

/**
 * execute_command - executes command entered by user
 * @arr: tokenized string entered by user
 */
void execute_command(char **arr)
{
	pid_t my_pid;
	int status;

	my_pid = fork();
	if (my_pid == -1)
	{
		perror("Unable to create child process");
		return;
	}
	if (my_pid == 0)
	{
		if (execve(arr[0], arr, NULL) == -1)
		{
			perror("Unable to execute");
			__exit(0);
		}
		__exit(0);
	}
	else
		wait(&status);
}

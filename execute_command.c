#include "shell.h"

/**
 * execute_command - executes command entered by user
 * @cmd_path: pointer to full path of a command
 * @arr: tokenized string entered by user
 */
void execute_command(char *cmd_path, char **arr)
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
                if (execve(cmd_path, arr, NULL) == -1)
                {
                        perror("Unable to execute");
                        _exit(0);
                }
                _exit(0);
        }
        else
                wait(&status);
}

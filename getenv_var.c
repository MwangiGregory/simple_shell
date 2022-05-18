#include "shell.h"

extern char **environ;

/**
 * _getenv - returns string containing environment values of name
 * @name: name of environment variable
 * Return: String of values, NULL if failed.
 */
char *_getenv(char *name)
{
	int i, j;
	char *current_var;

	for (i = 0; environ[i]; i++)
	{
		current_var = environ[i];
		for (j = 0; ;j++)
		{
			if (current_var[j] == '=')
				return (environ[i]);
			if (current_var[j] == name[j])
				continue;
			else
				break;
		}
	}
	return (NULL);
}


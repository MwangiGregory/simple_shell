#include "shell.h"

/**
 * command_search - validates if the executable of a command exists
 * @path: pointer to a string representing a command entered by user
 * @dirs: pointer to and array of path directories
 * Return: Tokenized string with full path to executable plus it's
 * arguments, NULL if command is not a valid executable
 */
char **command_search(char *path, char **dirs)
{
	int i, len = 0, res = -11, words = count_tokens(path);
	char *temp = NULL,  **strings;
	struct stat statbuf;

	if (!path || !dirs)
		return (NULL);
	/*freed*/
	len = _strlen(path);
	temp = malloc(len * sizeof(char));
	temp = _strcpy(temp, path);
	strings = malloc(words * sizeof(char *));
	split_string(temp, strings, " ");
	res = stat(strings[0], &statbuf);
	if (res == 0)
		return (strings);

	for (i = 0; dirs[i]; i++)
	{
		len = _strlen(path) + _strlen(dirs[i]) + 2;

		/*freed*/
		temp = malloc(len * sizeof(char));
		if (!temp)
			return (NULL);
		temp = _strcpy(temp, dirs[i]);
		temp = _strcat(temp, "/");
		temp = _strcat(temp, path);

		split_string(temp, strings, " ");
		res = stat(strings[0], &statbuf);
		if (res == 0)
			return (strings);
	}
	return (NULL);
}

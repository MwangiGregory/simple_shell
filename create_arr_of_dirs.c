#include "shell.h"

/**
 * create_arr_of_dirs - creates an array of pointers that
 * point to pathnames of directories.
 * @path: pointer to the  PATH environment variable
 * Return: pointer to an array of pointers , NULL if failed.
 */
char **create_arr_of_dirs(char *path)
{
	int len, no_of_dirs;
	char *path_cpy;
	char **arr_of_dirs;

	len = _strlen(path);

	/*TODO: free this memory*/
	path_cpy = malloc(len * sizeof(char));
	if (!path_cpy)
		return (NULL);

	path_cpy = _strcpy(path_cpy, path);

	no_of_dirs = count_dirs(path);

	/*TODO: free this memory*/
	arr_of_dirs = malloc(no_of_dirs * sizeof(char *));
	if (!arr_of_dirs)
		return (NULL);

	split_string(path_cpy, arr_of_dirs, ":");
	return (arr_of_dirs);
}

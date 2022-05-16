/**
 * count_dirs - finds the number of directories in path string
 * @path: pointer to a path string
 * Return: number of directories in path string
 */
int count_dirs(char *path)
{
	int i = 0;
	int no_of_dirs;

	for (i = 0; path[i] != '='; i++)
		;

	/*move to next char after equals sign*/
	i++;
	if (path[i])
		no_of_dirs = 1;

	while (path[i])
	{
		if (path[i] == ':')
			no_of_dirs++;
		i++;
	}
	return (no_of_dirs);
}

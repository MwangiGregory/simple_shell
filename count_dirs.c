/**
 * count_dirs - finds the number of directories in path string
 * @path: pointer to a path string
 * Return: number of directories in path string
 */
int count_dirs(char *path)
{
	int i = 0;
	int no_of_dirs;

	while (path[i])
	{
		if (path[i] == ':')
			no_of_dirs++;
		i++;
	}
	no_of_dirs++;
	return (no_of_dirs);
}

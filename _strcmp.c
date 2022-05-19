/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if they're equal,
 * -1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] || s2[j])
	{
		if (s1[i] != s2[j])
			return (-1);
		i++;
		j++;
	}
	if (s1[i] != s2[j])
		return (-1);
	return (0);
}

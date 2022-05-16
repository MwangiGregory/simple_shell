/**
 * _strlen - find the length of a string
 * @s: pointer to a string
 *
 * Return: Length of string pointed to by s. Length excludes
 * the NULL character
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

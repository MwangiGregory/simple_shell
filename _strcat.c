#include <stddef.h>

/**
 * _strcat - concatenates two strings and adds a
 * terminating byte at the end
 * @dest: string to be appended
 * @src: string added to dest
 *
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	if (!dest || !src)
		return (NULL);
	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];

	if (src[j] == '\0')
		dest[i] = src[j];

	return (dest);
}

#include <stddef.h>

/**
 * _strcpy - copies the string pointed to by src.
 * to the buffer pointed to by dest.
 * @src: pointer to string to be copied
 * @dest: pointer to buffer
 *
 * Return: Null if failed, pointer to buffer otherwise.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (!dest || !src)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

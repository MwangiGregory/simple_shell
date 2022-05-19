#include "shell.h"

/**
 * env - prints the current environment
 */
void env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		_putchar(environ[i]);
		_putchar("\n");
	}
}

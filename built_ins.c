#include "shell.h"

/**
 * built_ins - calls the functions of commands that
 * are integrated(built into) in hsh
 * @bi: pointer to built in command that was writteb by the user
 */
void built_ins(char *bi)
{
	if (!bi)
		return;
	if (!(_strcmp(bi, "exit")))
		__exit(EXIT_SUCCESS);
	else if (!(_strcmp(bi, "env")))
		env();
	else
		return;
}

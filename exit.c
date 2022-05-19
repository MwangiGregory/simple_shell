#include <stdlib.h>

/**
 * exit_ - cause normal process termination
 * @status: value returned to parent process
 */
void exit_(int status)
{
	exit(status);
}

#include <stdlib.h>
/**
 * __exit - causes normal process termination
 * @status: value returned to parent
 */
void __exit(int status)
{
	exit(status);
}

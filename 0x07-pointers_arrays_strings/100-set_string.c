#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: The pointer to pointer
 * @to: The pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}

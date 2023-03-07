#include "main.h"
/**
 * set_string - sets value of pointer to a char
 * @s: pointer to pointer we need to set to char
 * @to: string to set to pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}

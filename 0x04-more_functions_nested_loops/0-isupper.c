#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if c is uppercase or 0 if lowercase
 * @c: integer to be checked
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

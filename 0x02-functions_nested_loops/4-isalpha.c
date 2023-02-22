#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: 0 if not alphabetic, 1 if letter either case
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

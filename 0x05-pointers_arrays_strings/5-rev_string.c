#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be manipulated
 */
void rev_string(char *s)
{
	int i, len, len2;

	char temp;

	len = 0;
	len2 = 0;

	while (s[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len2 - i - 1];
		s[len2 - i - 1] = temp;
	}
}

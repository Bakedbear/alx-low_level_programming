#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string to check initial segment
 * @accept: string containing list of characters to match
 *
 * Return: number of bytes from segment s that matches  bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag, o;

	o = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				o++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (o);
		}
	}

	return (0);
}

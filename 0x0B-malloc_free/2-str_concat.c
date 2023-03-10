#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space in memory with
 * both strings, or return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *sum;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	sum = malloc(sizeof(char) * (len1 + len2 + 1));
	if (sum == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			sum[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			sum[i] = s2[i];
			i++;
			j++;
		}
	}
	sum[i] = '\0';

	return (sum);
}

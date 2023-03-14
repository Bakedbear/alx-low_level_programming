#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int find_length(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: string 2
 * Return: pointer to newly allocated space in memory containing
 * concatenated string
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1, s2, s3, i;

	i = 0;

	char *a;

	s1 = find_length(s1);
	s2 = find_length(s2);
	s3 = s1 + s2 + 1;
	a = malloc(s3);

	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		a[i] = *s1;
		s2++;
		i++;
	}
	a[i] = '\0';
	return a;
}

/**
 * find_length - finds length of string
 * @str: string
 * Return: length of string
 */
int find_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + find_length(str + 1));
}

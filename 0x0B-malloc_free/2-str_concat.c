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
	size_t str1, str2, str3, i;

	i = 0;

	char *a;

	str1 = find_length(str1);
	str2 = find_length(str2);
	str3 = str1 + str2 + 1;
	a = malloc(str3);

	while (*str1 != '\0')
	{
		a[i] = *str1;
		str1++;
		i++;
	}
	while (*str2 != '\0')
	{
		a[i] = *str1;
		str2++;
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

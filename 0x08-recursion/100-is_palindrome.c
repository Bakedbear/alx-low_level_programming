#include "main.h"

int check_Palindrome(char *s, int i, int len);
int find_str_len(char *s);

/**
 * is_palindrome - checks if  a string is a palindrome
 * @s: string to be checked
 * Return: 1 if is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_Palindrome(s, 0, find_str_len(s)));
}

/**
 * find_str_len - finds length of string
 * @s: string
 * Return: 0 if string is empty, otherwise return string length 
 */
int find_str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + find_str_len(s + 1));
}

/**
 * check_Palindrome - checks if string is palindrome
 * @s: string to check
 * @i: integer to check
 * @len: length of string
 * Return: 0 if not palindrome, 1 if palindrome
 *
 */
int check_Palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_Palindrome(s, i + 1, len - 1));
}



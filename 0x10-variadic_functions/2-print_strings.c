#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, int);

		if (!s)
			s = "(nil)";
		if (!sep)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s)
		else
			printf("%s%s", separator, s);

		printf("\n");
	}

	va_end(ptr);
}

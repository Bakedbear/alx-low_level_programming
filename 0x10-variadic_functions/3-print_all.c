#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";

	va_list ptr;

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ptr, int));
				case 'i':
                                        printf("%s%d", sep, va_arg(ptr, int));
				case 'f':
                                        printf("%s%f", sep, va_arg(ptr, double));
				case 's':
                                        s = va_arg(ptr, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ptr);
}

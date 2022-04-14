#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prrints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to functions
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	if (n > 0)
	{
		va_start(strings, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(strings, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(strings);
	}
	printf("\n");
}

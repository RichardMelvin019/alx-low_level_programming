#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_number - prints number
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mel_print;
	unsigned int i;

	va_start(mel_print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mel_print, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(mel_print);
	printf("\n");
}

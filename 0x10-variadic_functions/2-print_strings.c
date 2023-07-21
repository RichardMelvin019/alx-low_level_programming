#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: string to be printed between the strings
 * @n: number of sting passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mel_string;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(mel_string, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(mel_string, char *);
			if (string == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", string);
			}
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(mel_string);
	printf("\n");
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all thge parameters
 * @n: the constant number
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mel_sum;
	unsigned int i;
	int sum_result = 0;

	if (n != 0)
	{
		va_start(mel_sum, n);
		for (i = 0; i < n; i++)
		{
			sum_result = sum_result + va_arg(mel_sum, int);
		}
		va_end(mel_sum);
		return (sum_result);
	}
	return (0);
}

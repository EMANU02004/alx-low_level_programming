#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns sum of all parameters
 * @n: Number of arguments
 * @...: Other arguments
 *
 * Return: Sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 * Description:function that prints numbers, followed by a new line.
 * @separator:is the string to be printed between numbers.
 * @n:is the number of integers passed to the function.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list arglis;

	va_start(arglis, n);
	c = 0;
	for (; c < n; c++)
	{
		if (c < n - 1 && separator != NULL)
		{
			printf("%d%s", va_arg(arglis, unsigned int), separator);
		}
		else if (c < n && separator != NULL)
		{
			printf("%d", va_arg(arglis, unsigned int));
		}
	}
	printf("\n");
}

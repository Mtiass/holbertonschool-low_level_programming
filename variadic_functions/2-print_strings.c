#include "variadic_functions.h"
/**
 * print_strings - Entry point
 * Description:function that prints strings, followed by a new line.
 * @separator:is the string to be printed between the strings.
 * @n:is the number of strings passed to the function.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	const char *str;
	va_list arglis;

	va_start(arglis, n);
	str = va_arg(arglis, const char *);

	for (c = 0; c < n; c++)
	{
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && c < n - 1)
			printf("%s", separator);
		str = va_arg(arglis, const char *); 
	}
	printf("\n");
	va_end(arglis);
}

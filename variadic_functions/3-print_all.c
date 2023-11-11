#include "variadic_functions.h"
/**
 * print_all - Entry point
 * Description:function that prints anything.
 * @format:is a list of types of arguments passed to the function.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int c;
	char *str;
	va_list arglis;

	while (format == NULL)
	{
		printf("\n");
		return; }
	va_start(arglis, format);
	c = 0;
	while (format[c] != '\0')
	{
		switch (format[c])
		{
			case 'c': {
				printf("%c", va_arg(arglis, int));
				break; }
			case 'i': {
				printf("%i", va_arg(arglis, int));
				break; }
			case 'f': {
				printf("%f", va_arg(arglis, double));
				break; }
			case 's': {
				str = va_arg(arglis, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break; }
				printf("(nil)");
				break; }
		default:
			c++;
			continue; }
		if (format[c + 1] != '\0')
			printf(", ");
		c++;
	}
	printf("\n");
	va_end(arglis);
}

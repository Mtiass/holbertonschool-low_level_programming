#include "function_pointers.h"
/**
 * print_name - Entry point
 * Descripton:function that prints a name.
 * @name: pointer type char
 * @f: pointer to a function that takes a char pointer as parameter.
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

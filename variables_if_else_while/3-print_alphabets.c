#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char al, Ual;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (Ual = 'A'; Ual <= 'Z'; Ual++)
	{
		putchar(Ual);
	}
	putchar('\n');
	return (0);
}

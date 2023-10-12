#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 * in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int newl = 0;
	char alph;

	while (newl < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		newl++;
	}
}

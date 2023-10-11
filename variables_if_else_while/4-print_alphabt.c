#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char AL;

	for (AL = 'a'; AL <= 'z'; AL++)
	{
		if (AL != 'q' && AL != 'e')
		{
			putchar(AL);
		}
	}
	putchar('\n');
	return (0);
}

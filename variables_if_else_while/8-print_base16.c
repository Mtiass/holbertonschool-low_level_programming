#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int bas16;

	for (bas16 = "0x0"; bas16 <= "0x16"; bas16++)
	{
		putchar(bas16);
	}
	putchar('\n');
	return (0);
}

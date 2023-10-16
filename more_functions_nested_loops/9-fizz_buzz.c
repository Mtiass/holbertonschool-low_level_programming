#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3) == 0)
		{
			printf("Fizz ");
		}
		if else ((m % 5) == 0)
		{
			printf("buzz ");
		}
		if else ((m % 3 == 0) && (m % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", m);
		}
	}
}

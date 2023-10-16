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
		else if ((m % 5) == 0)
		{
			printf("buzz ");
		}
		else if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", m);
		}
	}
}

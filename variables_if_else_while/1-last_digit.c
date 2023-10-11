#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastd = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n,lastd);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n,lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n,lastd);
	}
	return (0);
}

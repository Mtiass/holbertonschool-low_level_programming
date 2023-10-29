#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:program that adds positive
 * numbers.
 * @argc: argument counter.
 * @argv:argument vector(array) of strings.
 * Return:integer 0.
 */
int main(int argc, char **argv)
{
	int sum, con, pos;

	pos = 0;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (con = 1; con < argc; con++)
	{
		while (argv[con][pos] != '\0')
		{
			if (argv[con][pos] < '0' || argv[con][pos] > '9')
			{
				printf("Error\n");
				return (1);
			}
			pos++;
		}
		if (atoi(argv[con]) > 0)
		{
			sum += atoi(argv[con]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

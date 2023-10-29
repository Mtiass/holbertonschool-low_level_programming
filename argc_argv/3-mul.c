#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:"program that multiplies two
 * numbers."
 * @argc:argument counter.
 * @argv:argument vector(array) of strings.
 * Return: integer 0.
 */
int main(int argc, char **argv)
{
	int con, mult = 1;
	char war[] = "Error";

	if (argc > 2)
	{
		for (con = 1; con < argc; con++)
		{
			mult *= atoi(argv[con]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("%s", war);
		return (1);
	}
	return (0);
}

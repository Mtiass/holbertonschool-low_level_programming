#include <stdio.h>
/**
 * main - Entry point
 * Description:"program that prints the number
 * of arguments passed into it."
 * @argc: argument counter.
 * @argv: argument vector(array) of strings.
 * Return:integer 0.
 */
int main(int argc, char **argv)
{
	(void)**argv;
	printf("%d\n", (argc - 1));
	return (0);
}

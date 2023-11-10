#include "3-calc.h"
/**
 * main - Entry point
 * Description:program that performs simple operations
 * @argc: argument counter
 * @argv: pointer array of strings of arguments.
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	int n1, n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	int (*operation)(int, int) = get_op_func(argv[2]);

	if (operation == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", operation(n1, n2));
	return(0);
}

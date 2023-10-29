#include <stdio.h>
/**
 * main - Entry point
 * Description:"program that prints all arguments
 * it receives."
 * @argc:argument counter.
 * @argv:argument vector(array) of strings.
 * Return:integer 0.
 */
int main(int argc, char **argv)
{
	int con = 0;

	if (argv[con 0] != argv[argc])
	{
		for (; con < argc; con++)
		{
			printf("%s\n", argv[con]);
		}
	}
	return (0);
}

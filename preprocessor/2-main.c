#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description:program that prints the name of the file it was
 * compiled from, followed by a new line.
 * Return: 0
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}

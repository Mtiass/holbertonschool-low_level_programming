#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * Description:"function that prints the sum of
 * the two diagonals of a square matrix of
 * integers."
 * @a: int pointer.
 * @size: int variable.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int con, con2, add, add2;

	add = 0;
	add2 = 0;
	for (con = 0; con < size; con++)
	{
		add += *((a + con) * (size + con));
	}
	for (con2 = 0; con2 < size; con2++)
	{
		add2 += *((a + con2) * (size + (size - 1 - con2)));
	}
	printf("%d, %d\n", add, add2);
}

#include "3-calc.h"
/**
 * op_add - Entry point
 * Description:returns the sum of a and b.
 * @a:1st parameter integer.
 * @b:2nd parameter integer.
 * Return:sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Entry point
 * Description:returns the difference of a and b.
 * @a:1st parameter integer.
 * @b:2nd parameter integer.
 * Return:difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Entry point
 * Description: returns the product of a and b.
 * @a:1st parameter integer.
 * @b:2nd parameter integer.
 * Return:product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Entry point
 * Description:returns the result of the division of a by b.
 * @a:1st parameter integer.
 * @b:2nd parameter integer.
 * Return:result division of a by b.
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		puts("Error");
		exit(100);
	}
}
/**
 * op_mod - Entry point
 * Description:returns the remainder of the division of a by b.
 * @a:1st parameter integer.
 * @b:2nd parameter integer.
 * Return:remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		puts("Error");
		exit(100);
	}
}

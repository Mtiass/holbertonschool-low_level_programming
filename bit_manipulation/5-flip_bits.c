#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: 1st number as parameter.
 * @m: 2nd number as parameter.
 * Return:number of bits you would need to flip to get from one number
 * to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pot = n ^ m;
	unsigned int con = 0;

	while (pot)
	{
		con += pot & 1;
		pot >>= 1;
	}
	return (con);
}

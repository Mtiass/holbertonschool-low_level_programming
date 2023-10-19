#include "main.h"

/**
 * rev_string - Entry point
 * Description:"In README.md file"
 * @s:"pointer type char"
 * Return:
 */
void rev_string(char *s)
{
	int posin;
	int posfin;
	char sw;

	posfin = 0;
	while (s[posfin] != '\0')
	{
		posfin++;
	}
	posin = 0;
	while (posin < posfin)
	{
		sw = s[posin];
		s[posin] = s[posfin];
		s[posfin] = sw;
		posin++;
		posfin--;
	}
}

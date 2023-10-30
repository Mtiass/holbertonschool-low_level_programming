#include "main.h"
/**
 * cap_string - Entry point
 * Description:"function that capitalizes all
 * words of a string."
 * @st: string to be capitalized.
 * Return: a char pointer to a string.
 */
char *cap_string(char *st)
{
	int con;

	con = 0;
	while (st[con])
	{
		while (!(st[con] >= 'a' && st[con] <= 'z'))
		{
			con++;
		}
		if (con == 0 || st[con - 1] == ' ' || st[con - 1] == '\t' ||
		st[con - 1] == '\n' || st[con - 1] == ',' ||
		st[con - 1] == ';' || st[con - 1] == '.' ||
		st[con - 1] == '!' || st[con - 1] == '?' ||
		st[con - 1] == '"' || st[con - 1] == '(' ||
		st[con - 1] == ')' || st[con - 1] == '{' ||
		st[con - 1] == '}')
		{
			st[con] -= 32;
		}
		con++;
	}
	return (st);
}

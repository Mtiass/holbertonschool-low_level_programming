#include "main.h"

/**
 * string_toupper - Entry point
 * Description:"In README.md file"
 * Return:
 */
char *string_toupper(char *)
{
	char *str;
	int con;

	con = 0;
	while (str[con] != '\0')
	{
		if (str[con] >= 97 && str[con] <= 122)
		{
			str[con] -= 32;
		}
		con++;
	}	
	return (str);
}

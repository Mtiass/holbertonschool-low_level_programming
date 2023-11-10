#include "3-calc.h"
/**
 * get_op_func - Entry point
 * Description:function that selects the correct function to perform
 * the operation asked by the user.
 * @s:operator passed as argument to the program.
 * Return:a pointer to the function that corresponds to the operator
 * given as a parameter.
 */
op_t ops[] = {                                                                                                                                                                      {"+", op_add},                                                                                                                                                              {"-", op_sub},                                                                                                                                                              {"*", op_mul},                                                                                                                                                              {"/", op_div},                                                                                                                                                              {"%", op_mod},                                                                                                                                                              {NULL, NULL}                                                                                                                                                        };
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i], s) == 0)
		{
			return[i].f;
		}
		i++;
	}
	puts("Error");
	exit(99);
}

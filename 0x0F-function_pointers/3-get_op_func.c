#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct operation function asked
 * @s: The operator
 * Return: A pointer to the function corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	
	{
		{"+", op_add},
		{"%", op_mod},
		{"*", op_mul},
		{"-", op_sub},
		{"/", op_div},
		{NULL, NULL},
	};

	int a = 0;
	while (ops[a].op != NULL &&
		      	*(ops[a].op) != *s)
		a++;
	{
	return (ops[a].f);
	}
}


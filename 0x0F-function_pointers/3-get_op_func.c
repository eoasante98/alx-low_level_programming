#include "3-calc.h"
/**
 * get_op_func - ...
 * @s: ...
 * Return: ...
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		("/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
		};

		int i = 0;

		while (i < 10)
		{
			if (s[0] == ops->op[i])
				break;
			i++;
		}
		return (ops[i / 2].f);
}


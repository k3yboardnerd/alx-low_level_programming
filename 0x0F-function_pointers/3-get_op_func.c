#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - This func returns a pointer to the func that corresponds to op
 * @s: operator string
 * Description: This function returns a ptr to the func that corres op
 * Return: func pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}


	return (NULL);
}

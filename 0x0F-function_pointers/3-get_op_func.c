#include "calc.h"

/**
 * get_op_func - selects the correct function to perform operation
 * asked by the user
 * @s: operator provided
 *
 * Return: pointer to the function with the corresponding operator 
 * as provided
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
    int i;

    i = 0;

    while (ops[i].op)
    {
	    if (strcmp(ops[i].op, s) == 0)
		    return (ops[i].f);
	    i++;
    }

    return (NULL);
}

#include "3-calc.h"
#include "string.h"
/**
 * get_op_func - elects the correct function to perform an operation.
 * @s: Input string of operation character
 *
 * Return: Pointer to the fuction to perfom the operation.
 */
int (*get_op_func(char *s))(int, int)
{
	int index;

	op_t options[] = {
		{"+", (*op_add)},
		{"-", (*op_sub)},
		{"*", (*op_mul)},
		{"/", (*op_div)},
		{"%", (*op_mod)},
		{NULL, NULL}
	};

	index = 0;

	while (strcmp(s, options[index].op))
	{
		index++;

		if (index >= 5)
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (options[index].f);
}

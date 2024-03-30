#include "3-calc.h"

/**
 * op_add - Calculates the sum of two numbers.
 * @a: Input int a.
 * @b: Input int b/
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	;
	return (a + b);
}
/**
 * opt_sub - Calcualtes the difference of two numbers.
 * @a: Input int a.
 * @b: Input int b.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	;
	return (a - b);
}
/**
 * op_mul - Calculates the product of two numbers.
 * @a: Input int a.
 * @b: Input int b.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;

	return (res);
}
/**
 * op_div - Calculates the quotient of two numbers.
 * @a: Input int a.
 * @b: Input int b.
 *
 * Return: The quotient to a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - Calculates the remainder the quotient of two number, the modulus.
 * @a: Input int a.
 * @b: Input int b.
 *
 * Return: The modudus of a / b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds to integers a and b.
 * @a: First integer
 * @b: Second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b.
 * @a: Integer one
 * @b: Integer two
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: First int
 * @b: Second int
 * Return: Porduct of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a by b
 * @a: Int one
 * @b: Int two
 * Return: division of a by b
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
 * op_mod - remainder of the division of a by b
 * @a: int one
 * @b: int two
 * Return: remainder of a by b.
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

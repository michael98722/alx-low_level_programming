#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: first int
 * @b: second int
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}

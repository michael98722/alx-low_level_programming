#include "main.h"

/**
 * print_last_digit - it prints the last digit of a number
 * @r: the digit of a number
 * Return: the vaue of the last digit
 */

int print_last_digit(int r)
{

	int ld = r % 10;

	if (ld < 0)

		ld *= -1;

	_putchar(ld + '0');

	return (0);
}

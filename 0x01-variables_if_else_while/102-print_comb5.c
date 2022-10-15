#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c, i;

	for (c = 0; c < 99; c++)
	{
		for (i = 0; i < 99; i++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);

			putchar(' ');

			putchar('0' + i / 10);
			putchar('0' + i % 10);

			if (c == 99 && i == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: 1 for pos, 0 for zero and -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

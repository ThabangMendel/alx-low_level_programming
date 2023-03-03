#include "main.h"  

/**
 * print_sign - prints the sign of a number.
 * @n: number to be checked.
 * Return: 1 and print + if number > 0,
 * 0 if number is 0 and print 0,
 * -1 and print - if number < 0 .
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}

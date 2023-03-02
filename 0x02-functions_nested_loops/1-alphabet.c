#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter = 97;

	while (letter >= 97 && letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar(10);
}

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 */
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

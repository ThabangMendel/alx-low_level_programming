#include "main.h"

/**
 * Task_1 : Alphabet
 *
 * For: ALX
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

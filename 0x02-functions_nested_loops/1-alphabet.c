/**
 * Task 1 for alx
 * By Thabang
 */

#include "main.h"

/**
 * 1-aphabet.c Prints the alphabet,
 * in lowercaser, followed by new line
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter >= 97 && letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar(0);
}

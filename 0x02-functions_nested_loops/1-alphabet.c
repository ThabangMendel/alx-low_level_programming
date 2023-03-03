#include "main.h"

/**
 * main - Entry point
 *
 * Return: Alwyas (0) Success
 */

/**
 * print_alphabet - prints the alphabet, in lowercase, followwed by a new line
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

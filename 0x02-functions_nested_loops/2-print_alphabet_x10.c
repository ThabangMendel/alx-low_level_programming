#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		int letter = 97;
	
		while (letter >= 97 && letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar(10);
	}
}

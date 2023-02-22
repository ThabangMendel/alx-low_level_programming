#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int letter = 97;

	while (letter >= 97 && letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}

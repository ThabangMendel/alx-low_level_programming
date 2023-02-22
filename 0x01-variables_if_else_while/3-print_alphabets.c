#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int letter = 65;

	while (letter >= 65 && letter < 123)
	{
		if (letter >= 65 && letter < 91)
		{
			putchar(letter);
			letter++;
		}
		if (letter >= 97 && letter < 123)
		{
			putchar(letter);
			letter++;
		}
	}
	putchar(10);
	return (0);
}

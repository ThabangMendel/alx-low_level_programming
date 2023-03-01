#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int letter;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + 48);
	}

	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}

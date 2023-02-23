#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int l;

	for (l = 97; l < 123; l++)
	{
		if ( l != 101 && l !=  113)
		{
			putchar(l);
		}
	}
	putchar(10);
	return (0);
}

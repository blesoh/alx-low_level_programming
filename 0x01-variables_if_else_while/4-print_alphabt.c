#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
			putchar (i);
	}
		putchar ('\n');
		return (0);
}

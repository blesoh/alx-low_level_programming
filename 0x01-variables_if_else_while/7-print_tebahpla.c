#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

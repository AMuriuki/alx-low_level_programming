#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int d;

	for (d = 1; d < 10; d++)
	{
		putchar(c + '0');
		putchar(d + '0');

		if (c == 8 && d == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

		if (d == 9)
		{
			c++;
			d = c;
		}
	}
	putchar('\n');
	return (0);
}

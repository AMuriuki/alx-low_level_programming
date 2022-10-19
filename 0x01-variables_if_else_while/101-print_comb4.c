#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int d = 1;
	int e = 2;

	while (e <= 10)
	{
		putchar(c + '0');
		putchar(d + '0');
		putchar(e + '0');
		e++;

		if (e > 9)
		{
			d++;
			e = d + 1;
		}

		if (d > 8)
		{
			c++;
			d = c + 1;
			e = d + 1;
		}

		if (c > 7 && d > 8 && e > 9)
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

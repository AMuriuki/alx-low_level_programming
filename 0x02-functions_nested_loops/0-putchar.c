#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char h[] = "_putchar";
	int m;

	m = 0;

	while (m <= 7)
	{
		_putchar(h[m]);
		m++;
	}
	_putchar('\n');

	return (0);
}
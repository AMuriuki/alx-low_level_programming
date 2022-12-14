#include "main.h"

/**
 * print_last_digit - prints the value of the last digit
 *
 * @n: the number input
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{

	int ld;

	if (n < 0)
	{
		ld = -(n % 10);
	}
	else
	{
		ld = n % 10;
	}

	_putchar(ld + '0');
	return (ld);
}

#include <stdio.h>

/**
 * _abs - compute the absolute value of a given number
 * @n: the input number
 *
 * Return: n if n is positive otherwise -n if n is negative
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}

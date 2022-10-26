#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;
	int res = 0;

	for (; *s != '\0' ; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}

	if (sign == -1)
	{
		res = -sum;
	}
	else
	{
		res = sum;
	}
	return (res);
}

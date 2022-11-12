#include "../main.h"

/**
 * _isdigit - checks fir a digit between 0-9
 * @c: input to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);	
}

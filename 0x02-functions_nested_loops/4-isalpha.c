#include "main.h"

/**
 * main - checks for alphabetic character.
 *
 * Return: 1 if c is a letter, lowercase or uppercase other wise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

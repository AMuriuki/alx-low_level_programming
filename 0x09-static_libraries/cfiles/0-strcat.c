#include "../main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: argument to copy to
 * @src: argument to copy from
 *
 * Return: two concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;

	for (n = 0; dest[n] != '\0'; n++)
		;

	while (src[n] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	return (dest);

}

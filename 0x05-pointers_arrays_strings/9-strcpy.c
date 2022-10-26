#include "main.h"

/**
 * _strcpy - copy string pointed to by src,
 * including the terminating null (\0),
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer that will receive the output
 * @src: pointer to the value of the string
 *
 * Return: the argument dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

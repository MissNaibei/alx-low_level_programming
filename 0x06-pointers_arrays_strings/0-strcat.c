#include "main.h"
#include <string.h>

/**
 * _strcat -> This is a function
 * @dest: First parameter
 * @src: Second parameter
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (dest_len = 0, src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	dest[len] = '\0';
	return (dest);
}

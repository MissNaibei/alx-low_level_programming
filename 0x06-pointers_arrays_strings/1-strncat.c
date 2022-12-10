#include "main.h"
#include <string.h>

/*
 * _strncat - the function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}

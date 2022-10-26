#include "main.h"
/**
 * _strlen -> function that returns lenght of a string
 * @s: the string to be examined
 * Return: returns length of str
 */
int _strlen(char *s)
{
int count, len;
len = 0;
for (count = 0; s[count] != '\0'; count++)
len++;
return (len);
}

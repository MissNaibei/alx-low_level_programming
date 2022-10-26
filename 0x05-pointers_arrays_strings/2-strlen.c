#include "main.h"
/**
 * _strlen -> function that returns lenght of a string
 * @s: the string to be examined
 * Return: returns length of str
 */
int _strlen(char *s)
{
int len;
for (; *s != '\0'; s++)
{
len += 1;
}
return (len);
}

#include "main.h"
/**
 *_puts - prints a string followed by a new line to std output
 * @str: string to print
 * Return: Return string characters
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

<<<<<<< HEAD
#include "main.h"
/**
 * _puts ->  function that prints a string, followed by a new line, to stdout
 * @str: parameter passed
 * Return: returns a string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
=======
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
>>>>>>> 92d1d5570b26995b9bc9cd8d8e4f258a68ed7879

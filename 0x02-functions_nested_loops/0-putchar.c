#include "main.h"

/**
 * main: check the char  
 * Return: 0
 */
int main(void)
{
	char *val = "Valentine";

	while (*val)
	{
		_putchar(*val);
		val++;
	}
	_putchar('\n');
	return (0);
}

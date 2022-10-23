#include "main.h"

/**
 * main 
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

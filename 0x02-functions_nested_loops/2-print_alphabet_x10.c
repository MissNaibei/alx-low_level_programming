#include "main.h"

/**
 * print_alphabet - check the code
 *prints the alphabet 10times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alphabet;
int i;

for (i=1; i <= 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar(10);
}
}

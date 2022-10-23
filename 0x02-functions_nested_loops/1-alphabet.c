#include "main.h"

/**
 * print_alphabet - check the code
 *prints the alphabet in small letters
 * Return: Always 0.
 */

void print_alphabet(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar(10);
}

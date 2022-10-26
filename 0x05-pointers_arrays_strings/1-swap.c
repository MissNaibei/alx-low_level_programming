#include "main.h"
/**
 * swap_int -> function that will swap values of two integers a and b
 * @a: first integer
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
int var;
var = *a;
*a = *b;
*b = var;
}

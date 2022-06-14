#include "main.h"

/**
  * swap_int - swap the value of two integers
  * @a: integer 1
  * @b: intger 2
  * Return: 0 om success
  */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

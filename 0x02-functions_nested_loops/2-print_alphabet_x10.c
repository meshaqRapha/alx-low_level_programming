#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabets in lower case
  * ten times followed by a new line
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
int n = 0;

while (n <= 10)
{
char m = 'a';

while (m <= 'z')
{
_putchar(m);
m++;
}

_putchar('\n');
n++;
}
}

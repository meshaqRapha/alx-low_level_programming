#include "main.h"

/**
  * _putchar - writes a character c to stdout
  * @c: chatacter to be printef out
  * Return: void
  */

int _putchar(char c)
{
char str[] = "_putchar";

c = 0;

while (str[c] != '\0')
{
_putchar(str[c]);
c++;
}
}

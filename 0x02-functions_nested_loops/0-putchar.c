#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * _putchar - writes a character c to stdout
  * @c: chatacter to be printed
  * Return: void
  */

int main(void)
{
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

return (0);
}

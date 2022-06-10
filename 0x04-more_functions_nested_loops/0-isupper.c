#include "main.h"

/**
  * _isupper - checks if a letter is uppercase
  * @c: character to be checked
  * Return: 1 if uppercase and 0 if otherwise
  */

int _isupper(int c)
{
char c;

if (c >= 41 && c <= 90)
{
	return (1);
}

else if (c >= 97 && c <= 122)
{
	return (0);
}

_putchar('\n');
}

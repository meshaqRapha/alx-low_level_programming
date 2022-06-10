#include "main.h"

/**
  * _isupper - checks if a letter is uppercase
  * @c: character to be checked
  * Return: 1 if uppercase and 0 if otherwise
  */

int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}

else if (c >= 'A' && c <= 'Z')
{
	return (0);
}
_putchar('\n');
}

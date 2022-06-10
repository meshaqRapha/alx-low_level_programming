#include "main.h"

/**
  * _isupper - checks if a letter is uppercase
  * @c: character to be checked
  * Return: 1 if uppercase and 0 if otherwise
  */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}

else if (c >= 'a' && c <= 'z')
{
	return (0);
}
}

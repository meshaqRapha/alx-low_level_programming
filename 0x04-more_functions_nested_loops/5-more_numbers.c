#include "main.h"

/**
  * more_numbers - prints 0 to 14 ten times
  *
  * Return: 0
  */

void more_numbers(void)
{
	int nums, line;

	for (line = 0; line <= 9; line++)
	{
	for (nums = 0; nums <= 14; nums++)
	{
		if (nums > 9)
		_putchar((nums / 10) + '0');
	_putchar((nums % 10) + '0');
	}
	_putchar('\n');
	}
}

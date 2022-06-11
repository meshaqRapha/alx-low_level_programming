#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int hash, first;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (first = size - hash; first > 0; first--)
				_putchar(' ');

			for (first = 0; first < hash; first++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

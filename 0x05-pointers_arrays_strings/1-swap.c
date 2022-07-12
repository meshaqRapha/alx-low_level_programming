#include <stdio.h>
#include "main.h"

/**
* main - a function that swaps the values
* of integers a and b
* @a:integer a
* @b:integer b
*Return: Always 0
*/

void swap_int(int *a, int *b);

int main(void)
{
int a;
int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);

}

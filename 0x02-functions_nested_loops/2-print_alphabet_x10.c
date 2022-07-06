#include "main.h"
/**
* print_alphabet_x10 - function to print abc 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
char jj;
char vv;

for (vv = 0; vv <= 9; vv++)
{
for (jj = 'a'; jj <= 'z'; jj++)
{
_putchar(jj);
}
_putchar('\n') ;
}
}


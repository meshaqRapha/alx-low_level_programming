#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Enrtry point,positive or negative,print sign of random number
*@void:Empty parameter list for main
*Description: Positive,zero and negative values
*return: zero on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	puts("%d is positive\n", n);
	}	
	else if (n == 0)
	{
	puts("%d is zero\n", n);		
	} 	
	else
	{
	puts("%d is negative\n", n);
	}
	return (0);
}

#include <stdio.h>
/**
  * main - program that prints the number of arguments passed into it.
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

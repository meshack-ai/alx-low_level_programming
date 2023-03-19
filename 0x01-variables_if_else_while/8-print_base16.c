#include <stdio.h>
/**
  *main -entry point
  *Description - c program to print all numbers of base 16 in lower case
  *Return: Always 0
  */
int main(void)
{
	int m;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
  *main - Entry point
  *C program to print all single digit numbers base ten (0 - ()
  *Return: Always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		putchar('\n');
	}
	return (0);
}


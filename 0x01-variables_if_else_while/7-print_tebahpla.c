#include <stdio.h>
/**
  *main  - Entry point
  *Descritpion - program to pring alphabets in lower case reversed
  *Return: Always 0
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

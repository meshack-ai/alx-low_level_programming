#include "main.h"

/**
 * sqrt2 - possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and error set.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root n
 * @n: number integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}


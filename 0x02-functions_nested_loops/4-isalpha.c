#include "main.h"
/**
 *_isalpha -  Shows 1 if this input
  *letter Another cases , shows 0
  *
  *@c: The character is ASCII code
  *
  *Return: 1 or letters 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

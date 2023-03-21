#include "main.h"
/**
  *_abs - Computes tha absolute value
  *of an integer
  *@i: input  num as integer
  *
  *Return: abaolute value
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -i);
	}

}

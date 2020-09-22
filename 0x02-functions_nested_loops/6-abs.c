#include "holberton.h"
/**
 * _abs - computes the absolute value of a number
 * @n: the integer to value absolutely
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}

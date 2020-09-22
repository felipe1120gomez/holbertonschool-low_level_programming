#include "holberton.h"
/**
 * _islower - check if a character is upper or lower case
 * @c: the character to test
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

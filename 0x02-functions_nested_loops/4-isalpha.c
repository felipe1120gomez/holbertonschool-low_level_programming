#include "holberton.h"
/**
 * _isalpha - check if a character is a letter
 * @c: the character to test
 * Return: 1 if lower case
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

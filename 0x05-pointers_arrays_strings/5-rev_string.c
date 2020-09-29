#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char store;

	while (*end)
		end++;
	end = end - 1;
	while (s < end)
	{
		store = *s;
		*s++ = *end;
		*end-- = store;
	}
}

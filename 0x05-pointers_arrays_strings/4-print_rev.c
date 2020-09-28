#include "holberton.h"
/**
 * print_rev - print a string in reverse.
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (--i >= 0)
	_putchar(s[i]);
	_putchar('\n');
}

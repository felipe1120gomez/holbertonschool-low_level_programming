#include "holberton.h"
/**
 * _puts - print a string.
 * @str: pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

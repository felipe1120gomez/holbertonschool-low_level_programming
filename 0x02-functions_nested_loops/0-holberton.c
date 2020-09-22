#include "holberton.h"
/**
 * main - Print Holberton
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = "Holberton";

	int i = 0;

	while (i < 9)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

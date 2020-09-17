#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Description: putchar function
 * Return: zero
 */
int main(void)
{

	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

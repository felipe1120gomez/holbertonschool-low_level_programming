#include <stdio.h>
/**
 * main - prints the alphabet in lowercase in reverse
 *
 * Description: putchar function
 * Return: zero
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

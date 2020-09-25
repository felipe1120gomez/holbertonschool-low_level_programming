#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers.
 *
 * Description: putchar function
 * Return: zero
 */
int main(void)
{

	int c;

	for (c = '0'; c <= '9'; ++c)
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

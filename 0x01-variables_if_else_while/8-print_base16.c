#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: putchar function
 * Return: zero
 */
int main(void)
{
	char c, B;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (B = 'a'; B <= 'f'; B++)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}

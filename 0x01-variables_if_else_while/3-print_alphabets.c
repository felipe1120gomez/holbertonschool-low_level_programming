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

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (B = 'A'; B <= 'Z'; B++)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}

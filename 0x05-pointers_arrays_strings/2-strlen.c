#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer to a string
 *
 * Return: integer length of string.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);

}

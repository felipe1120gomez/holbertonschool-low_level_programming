#include "holberton.h"
/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

#include "main.h"

/**
 * strcpy - write a function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: This is the buffer point
 * @src: This is the string copy
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}

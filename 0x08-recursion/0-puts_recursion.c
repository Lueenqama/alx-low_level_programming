#include <stdio.h>

/**
 * _puts_recursion - this function prints a string
 * @s: the string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}

#include <stdio.h>

/**
 * _print_rev_recursion - this function prints string in reverse
 * @s: the string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}

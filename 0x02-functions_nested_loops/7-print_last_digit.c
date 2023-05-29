#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: the number to be treated
 * Return: Valcue of the last digit of number
 */

int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}

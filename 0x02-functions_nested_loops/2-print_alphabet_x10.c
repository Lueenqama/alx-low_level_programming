#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: prints 10 times the alphabets in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0; /*Initialize the variable i*/

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');

		i++; /*Increment i escape the loop*/
	}
}

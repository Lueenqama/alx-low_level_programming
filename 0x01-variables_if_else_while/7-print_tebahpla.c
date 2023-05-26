#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print the lowercase alphabets in reverse order'
 * Return: Always 0
 */
int main(void)
{
	int k = 122;

	while (k >= 97)
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}

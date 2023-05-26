#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print all single digit numbers of base 10
 * starting from 0
 * Return: Always 0
 */
int main(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		putchar(l + 48);
	}
	putchar('\n');
	return (0);
}

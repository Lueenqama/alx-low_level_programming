#include <stdio.h>

/**
 * main - Entry point
 * Descriptions: 'Print alphabets lowercase and uppercase'
 * Return: always 0
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}

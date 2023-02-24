#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all possible combinations of two digit numbers
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if ((n % 10) > (m % 10))
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


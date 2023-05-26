#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible different combinations of two digits'
 * Return: Always (0)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 58; a++)
	{
		for (b = 48; b <= 58; b++)
		{

			if ((b % 10) > (a % 10))
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');

				if (a != 56 || b != 57)
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

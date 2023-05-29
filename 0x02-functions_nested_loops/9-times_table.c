#include "main.h"

/**
 * 9_times_table - print 9 times table
 * Description: print all 9 times table
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			z = x * y;

			if (y == 0)
			{
				_putchar(z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (z < 10)
					_putchar(' ');
				
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}

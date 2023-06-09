#include <stdio.h>

/**
 * print_chessboard - function that prints chessboard
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8]);
{
	void print_chessboard(char (*a)[8])
	{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
		}
		putchar('\n');
	}
}


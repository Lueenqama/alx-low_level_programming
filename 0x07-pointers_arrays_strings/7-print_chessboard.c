#include <stdio.h>

/**
 * print_chessboard - this function prints a chessboard
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	char chessboard[8][8] = {
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
	};
	print_chessboard(chessboard);

	return 0;
}

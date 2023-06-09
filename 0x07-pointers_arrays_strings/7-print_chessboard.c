#include <stdio.h>

/**
 * print_chessboard - function that prints chessboard
 * @a: pointer to an array of 8 characters
 * Return: 0
 */

void print_chessboard(char (*a)[8]);
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row * 8 + col]);
		}
		putchar('\n');
	}
}

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char *chessboard = malloc(sizeof(char) * 8 * 8);

	print_chessboard(chessboard);

	free(chessboard);

	return (0);
}

#include <stdio.h>

/**
 * print_chessboard - function that prints chessboard
 * @a: pointer to an array of 8 characters
 * Return: 0
 */

void print_chessboard(char (*a)[8]);
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
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

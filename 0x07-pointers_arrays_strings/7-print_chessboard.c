#include <stdio.h>

/**
 * print_chessboard - this function prints a chessboard
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	printf(" a b c d e f g h\n");
	printf("  ---------------\n");

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", 8 - i);
		for (int j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("%d\n", 8 - i);
	}
	printf(" ---------------------\n");
	printf("  a b c d e f g h\n");
}

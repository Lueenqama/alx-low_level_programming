#include <stdio.h>

/**
 * print_diagsums - the sum of two diagonals of a square matrix of integers
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_main, sum_secondary);
}

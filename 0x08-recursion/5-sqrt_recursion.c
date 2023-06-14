#include <stdio.h>

/**
 * _sqrt_recursion - the function returns
 * the natural square root of a number
 *
 * sqrt_helper: this is a helper function
 * @start: begining of range
 * @end: equal to n
 * @n: parameter
 *
 * main - demonstrates usage of _sqrt_recursion function
 * Return: result
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (end);
	}

	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}

	if (square > n)
	{
		return (sqrt_helper(n, start, mid - 1));
	}

	return (sqrt_helper(n, mid + 1, end));
}

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_helper(n, 1, n));
}

#include <stdio.h>

/**
 * _sqrt_recursion - the function returns
 * the natural square root of a number
 * sqrt_helper: recursive function serves as a helper to
 * calculate the sqaure root of a number
 * @start: begining of range
 * @end: equal to n
 * @n: parameter
 * Returns: square root of the given number or -1.
 */

int sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
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

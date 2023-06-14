#include <stdio.h>

/**
 * _sqrt_recursion - the function returns
 * the natural square root of a number
 * _sqrt_recursion_helper: Helper function for calculating
 * the square root recursively.
 * @n: parameter
 * @start: begining of range
 * @end: end of range
 * Return: -1 or 1
 */

int _sqrt_recursion_helper(int n, int start, int end)

int _sqrt_recursion(int n);

int main(void)
{
	int number = 25;
	int result = _sqrt_recursion(number;

	printf("%d\n", number, result);
	return (0);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /*indicates error for - numbers */
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (_sqrt_recursion_helper(n, 0, n));
	}
}

int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
	return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
}

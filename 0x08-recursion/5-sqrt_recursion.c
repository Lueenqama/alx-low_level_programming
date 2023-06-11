#include <stdio.h>

/**
 * _sqrt_recursion - the function returns
 * the natural square root of a number
 * _sqrt_recursion_helper: function helper
 * @n: parameter
 * @start: begining of range
 * @end: end of range
 * Return: -1 or 1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
	{
		return (-1);
	}

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /*indicates error for - numbers */
	}
	return (_sqrt_recursion_helper(n, 0, n)); /* Call function range from 0 to n*/
}

#include <stdio.h>

/**
 * _sqrt_recursion - the function returns
 * the natural square root of a number
 * @start: begining of range
 * @end: equal to n
 * @n: parameter
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int result;
	int start = 1;
	int end = n;

	if (n == 0 || n == 1)
	{
		return (n);
	}

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}

		if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		} else
			end = mid - 1;
	}

	return (result);
}

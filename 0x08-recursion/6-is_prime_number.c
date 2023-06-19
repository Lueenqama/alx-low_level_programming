#include <stdio.h>


/**
 * is_prime_number - this function returns 1 if the input
 * is a prime number, otherwise 0
 * @n: parameter
 * Return: 1 or 0
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	};

	for (; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}

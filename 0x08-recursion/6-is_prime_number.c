#include <stdio.h>


/**
 * is_prime_number - this function returns 1 if the input
 * is a prime number, otherwise 0
 * @n: parameter
 * Return: 1 or 0
*/
int is_prime_recursive(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	}

	if (i <= 1)
	{
		return (1);
	}
	
	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, i - 1));
}

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n / 2));
}

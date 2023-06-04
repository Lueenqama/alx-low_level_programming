#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

int main(void)
{
	int numb1, numb2, numb3;
	int largest;

	printf("Enter three integers: ");
	scanf("%d %d %d", &numb1, &numb2, &numb3);

	largest = largest_number(numb1, numb2, numb3);

	printf("The largest number is: %d\n", largest);

	return (0);
}

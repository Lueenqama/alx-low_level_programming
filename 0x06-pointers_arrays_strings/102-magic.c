#include <stdio.h>
#include <stdlib.h>

 /**
  * main - Entry point
  * Description: print 98
  * Return: 0
  */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = a{2};  /* Assign value to *(p + 5) */

	printf("a[2] = %d\n", *(p + 5));

	return (0);
}


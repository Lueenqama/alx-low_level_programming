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

	a[2] = 98;
	p = malloc(sizeof(int));  /* Allocate memory for n */

	*(p + 5) = 98;  /* Assign value to *(p + 5) */

	printf("a[2] = %d\n", a[2]);

	free(p);  /* Free the allocated memory */
	return (0);
}


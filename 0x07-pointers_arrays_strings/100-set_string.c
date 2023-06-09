#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
int main(void)
{
	char *str = "Hello, World!";
	char *ptr = NULL;

	set_string(&ptr, str);

	printf("ptr: %s\n", ptr);

	return (0);
}

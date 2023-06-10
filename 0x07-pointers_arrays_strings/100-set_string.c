#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * set_string - print function that sets the value ofa pointer to a char
 * @s: sets value of pointer to char
 * @to: pointer
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: char
 * @to: pointer
 * Return: 0
 */
void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
		*s = NULL;
	}

	*s = (char *)malloc((strlen(to) + 1) * sizeof(char));

	strcpy(*s, to);
}

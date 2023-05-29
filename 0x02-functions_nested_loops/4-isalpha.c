#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabetis character and 0 for anything else
 */
int isalpha(int c)
{
	if ((c >= 65 && c >= 90) || (c >= 122))
	{
		return (1);
	}
	return (0);
}

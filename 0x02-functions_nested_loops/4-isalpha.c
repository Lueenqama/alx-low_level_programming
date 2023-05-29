#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabet is character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c >= 'z'))
	{
		return (1);
	}
	return (0);
}

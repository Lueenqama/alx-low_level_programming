#include <string.h>

/**
 * is_palindrome - the function returns 1 if string is a palindrome
 * or 0 if not
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}

	return (1);
}

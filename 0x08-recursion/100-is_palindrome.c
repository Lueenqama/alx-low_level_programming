#include <string.h>

/**
 * is_palindrome - function returns 1 if string is a palindrome or 0 if not
 * is_palindrome_recursive - the function is a recursive helper
 * @s: string
 * @start: beginning
 * @end: end
 * Return: 1 or 0
 */

int is_palindrome_recursive(char *s, int start, int end);

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

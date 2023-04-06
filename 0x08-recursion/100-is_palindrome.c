#include "main.h"
/**
 * getlen - gets the lenth of a string
 * @s: the string
 * Return: len
 */

int getlen(char *s)
{
	int len = 0;

	if (*(s))
	{
		len = 1;
		len += getlen(s + 1);
	}
	return (len);
}


/**
 * isp - checks if a string is a palindrome
 * @len: the string length
 * @s: the string poointer
 * @i: a counter throught the string length
 * Return: 1 if is a palindrome, else 0.
 */

int isp(int len, char *s, int i)
{
		if (s[len - 1 - i] <= (len / 2))
			return (1);

		if (s[i] != s[len - 1 - i])
		return (0);

		return (isp(len, s, i + 1));
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string poointer
 * Return: 1 if its palindrome, else 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = getlen(s);

	if (*s == '\0')
		return (1);

	return (isp(len, s, i));
}


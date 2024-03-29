/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);

	if (s[0])
	{
		len += _strlen_recursion(s + 1);
		return (len);
	}
	return (len);
}

#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints in reverse
 * @s: the string to be reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int a;

	while (*(s + len) != '\0')
	len++;

	for (a = (len - 1); a >= (len / 2); a--)
	{
		char t;

		t = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = t;
	}
}

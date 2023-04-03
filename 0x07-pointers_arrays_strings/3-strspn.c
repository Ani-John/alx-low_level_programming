#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The searched string.
 * @accept: measured prefix.
 * Return: The number of bytes in s which consist only of bytes
 * from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j = 0;
unsigned int span = 0;

while (s[j])
{
for (i = 0; i <= 3; i++)
{
if (s[j] == accept[i])
{
span += 1;
break;
}
else if (accept[i + 1] == '\0')
return (span);
}
j++;
}
return (span);
}

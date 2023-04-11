#include <stdio.h>
/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money.
 *  @argc: argument count
 *  @argv: argument vector
 *  Return: 1 if the number of arguments passed to your program is
 *  not exactly 1, else 0.
 */
int main(int argc, char *argv[])
{
int num = 0, i, amount = argv[1];

	while (amount != 0)
	{
		if (amount >= 25)
		{
			amount -= 25;
			num++;
		}
		else if (amount >= 10)
		{
			amount -= 10;
			num++;
		}
		else if (amount >= 5)
		{
			amount -= 5;
			num++;
		}
		else if (amount >= 2)
		{
			amount -= 2;
			num++;
		}
		else if (amount >= 1)
		{
			amount -= 1;
			num++;
		}
	}

	printf("%d\n", num);
	return (0);
}

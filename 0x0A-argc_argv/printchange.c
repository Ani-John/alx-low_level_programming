#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * printchange - a program that prints the minimum number of coins to
 * make change for an amount of money.
 *  @amount: the amount to find change for
 */
int printchange(int amount)
{
int num = 0;
int amount = atoi(argv[1]);

	while (amount > 0)
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

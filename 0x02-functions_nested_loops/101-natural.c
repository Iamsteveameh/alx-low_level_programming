#include <stdio.h>

/**
 * main - find sum of multiples of 3 and 5 less than 1024
 *
 * Created by: Iamsteveameh
 * cc: 5th july 2022
 *
 * Return: 0 if successful
 */

int main(void)
{
	int ii, _sum;

	for (ii = 3; ii < 1024; ii++)
	{
		if (ii % 3 == 0 || ii % 5 == 0)
			_sum += ii;
	}
	printf("%d\n", _sum);
	return (0);
}

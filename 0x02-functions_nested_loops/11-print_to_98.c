#include "main.h"

/**
 * print - print variable recursively using _putchar
 * @n: variable to print
 */
void print(int n);

/**
 * print_to_98 - print all natural numbers from var to 98
 * @var: the starting limit
 *
 * Created by: Iamsteveameh
 * cc: 5th july, 2022
 */
void print_to_98(int var)
{
	int stopLimit = 98;

	if (var > stopLimit)
	{
		int ii;

		for (ii = var; ii >= stopLimit; ii--)
		{
			print(ii);
			if (ii != stopLimit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int jj;

		for (jj = var; jj <= stopLimit; jj++)
		{
			print(jj);
			if (jj != stopLimit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print - to print
 * @n: var
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

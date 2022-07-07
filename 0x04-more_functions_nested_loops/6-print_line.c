#include "main.h"

/**
 * print_line - print lines (_) n number of times
 * @n: integer variable
 *
 * Created by: Iamsteveameh
 * cc: 7th july, 2022
 */

void print_line(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}

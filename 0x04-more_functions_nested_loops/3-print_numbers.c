#include "main.h"

/**
 * print_numbers - prints number from 0-9
 *
 * Created by: Iamsteveameh
 * cc: 7th july, 2022
 */

void print_numbers(void)
{
	int ii = 0;

	do {
		_putchar(ii + '0');
		ii++;
	} while (ii < 10);

	_putchar('\n');
}

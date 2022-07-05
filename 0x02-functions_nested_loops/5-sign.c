#include "main.h"

/**
 * print_sign - print the sign of the input
 * @n: the variable to be checked
 *
 * Created - Sanctus-Peter
 * cc: 5th july, 2022
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}

#include "main.h"
#include "_abs.c"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}

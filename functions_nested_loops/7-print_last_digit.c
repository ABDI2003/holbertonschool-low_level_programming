#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to find the last digit of
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < -1)
	{
		last_digit = abs(last_digit);
	}
	_putchar('0' + last_digit);
	return (last_digit);
}

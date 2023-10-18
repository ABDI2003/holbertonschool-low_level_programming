#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 * Description: task
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;
	char myString[50];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	strcpy(myString, "Last digit of");
	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", myString, n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%s %d is %d and is 0\n", myString, n, last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("%s %d is %d and is les than 6 and not 0\n", myString, n, last_digit);
	}

	return (0);
}

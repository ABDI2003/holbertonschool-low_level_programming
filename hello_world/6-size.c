#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char caracter;
	int entero;
	long int largo1;
	long long int largo2;
	float decimal;

	printf("Size of a char: %ld byte(s)\n", sizeof(caracter));
	printf("Size of an int: %ld byte(s)\n", sizeof(entero));
	printf("Size of a long int: %ld byte(s)\n", sizeof(largo1));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(largo2));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));
	return (0);
}


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

	printf("Size of char: %ld\n", sizeof(caracter));
	printf("Size of int: %ld\n", sizeof(entero));
	printf("Size of long int: %ld\n", sizeof(largo1));
	printf("Size of long long int: %ld\n", sizeof(largo2));
	printf("Size of float: %ld\n", sizeof(decimal));
	return (0);
}


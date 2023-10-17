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

	printf("Size of char: %ld byte(s)\n", sizeof(caracter));
	printf("Size of int: %ld byte(s)\n", sizeof(entero));
	printf("Size of long int: %ld byte(s)\n", sizeof(largo1));
	printf("Size of long long int: %ld byte(s)\n", sizeof(largo2));
	printf("Size of float: %ld byte(s)\n", sizeof(decimal));
	return (0);
}


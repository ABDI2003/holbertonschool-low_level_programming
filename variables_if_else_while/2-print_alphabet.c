#include <stdio.h>

/**
 * main - Entry point
 * Description: task
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letra = 97;

	while (letra <= 122)
	{
		putchar(letra);
		letra++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Description: task
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		putchar(letra);
		letra++;
	}
	letra = 'A';

	while (letra <= 'Z')
	{
		putchar(letra);
		letra++;
	}
	putchar('\n');

	return (0);
}

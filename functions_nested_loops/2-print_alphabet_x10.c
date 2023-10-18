#include "main.h"
/**
 * print_alphabet_x10 - void
 * Description: prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char letra;

	for (i = 0; i <= 9; i++)
	{
		for (letra = 97; letra <= 122; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}

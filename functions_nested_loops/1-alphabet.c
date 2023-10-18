#include "main.h"

/**
 * print_alphabet - void
 * Description: prints the alphabet in lower case
 */

void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}

	_putchar('\n');
}

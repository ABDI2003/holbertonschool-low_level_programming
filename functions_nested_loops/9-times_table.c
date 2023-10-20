#include "main.h"

void times_table(void)
{
	int i;
	int j;
	int multiplicado;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			multiplicado = i * j;
			
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (multiplicado < 10)
			{
				_putchar(' ');
				_putchar('0' + multiplicado);
			}
			else
			{
				_putchar('0' + multiplicado / 10);
				_putchar('0' + multiplicado % 10);
			}
		}
		_putchar('\n');
	}	
}

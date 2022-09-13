#include "holberton.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */

void print_alphabet_x10(void)
{char x;
	int i;

	for (i = 0; i < 9 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar (x);
		}
		_putchar('\n');
	}
}

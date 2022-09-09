#include <stdio.h>
#include <stdlib.h>
/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */

int main(void)
{
	int w;
	int x = 0;

	while (x < 10)
	{
		w = 0;
		while (w < 10)
		{
			if (x != w && x < w)
			{
				putchar('0' + x);
				putchar('0' + w);

				if (w + x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			w++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}

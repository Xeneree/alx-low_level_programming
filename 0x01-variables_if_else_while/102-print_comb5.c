#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
	int w, x;

	for (w = 0; w <= 99; w++)
	{
		for (x = w; x <= 99; x++)
		{
			if (x != w)
			{
				putchar(w / 10 + 48);
				putchar(w % 10 + 48);
				putchar(' ');
				putchar(x / 10 + 48);
				putchar(x % 10 + 48);

				if (w * 100 + x != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

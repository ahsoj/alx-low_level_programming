
# include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int ans;
	int r;
	int c;
	int y;
	int z;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			ans = r * c;
			y = ans / 10;
			z = ans % 10;

			if (c == '0')
			{
				_putchar('0');
			}
			else if (ans < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(y + '0');
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}

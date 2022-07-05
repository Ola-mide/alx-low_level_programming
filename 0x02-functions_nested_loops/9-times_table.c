#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int row;
	int column;
	int times;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			times = (row * column);
			if (column == 0)
			{
				_putchar('0' + times);
			}
			else if (times <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + times);
			}
			else if (times > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
			}
		}
		_putchar('\n');
	}
}

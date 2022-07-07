#include "main.h"

/**
 * more_numbers - a function that prints numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int firstdigit;
	int lastdigit;
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{

		for (i = 0; i < 15; i++)
		{
			firstdigit = i / 10;
			lastdigit = i % 10;

			if (firstdigit > 0)
			{
				_putchar(firstdigit + '0');
			}
			_putchar(lastdigit + '0');
		}
		_putchar('\n');
	}

}

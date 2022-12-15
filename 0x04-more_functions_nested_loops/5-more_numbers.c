#include "main.h"
/**
  *more_numbers-that prints 10 times the numbers, from 0 to 14
  *
  *
  */
void more_numbers(void)
{
	int it;
	int i;

	for (it = 0; it <= 9; it++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i + '0');

			else
				_putchar(i + '0');
		}

		_putchar('\n');
	}

}

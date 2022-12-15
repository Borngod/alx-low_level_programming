#include "main.h"

/**
  *print_square-prints a square, followed by a new line.
  *@size:defines triangles size
  */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');

	int i = 0;

	while (i++ < size)
	{
		int e;

		for (e = 0; e < size; e++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

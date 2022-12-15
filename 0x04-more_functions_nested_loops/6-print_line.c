#include "main.h"
/**
  *print_line-draws a straight line in the terminal.
  *@n:the number of times the line prints
  *
  */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n')

	int i = 1;

	while (i++ <= n)
		_putchar('_')

	_putchar('\n')
}

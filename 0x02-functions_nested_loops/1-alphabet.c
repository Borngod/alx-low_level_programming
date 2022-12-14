#include "main.h"

/**
  *main- A function that prints the alphabet, in lowercase, followed by a new line.
  *
  *Return:Always 0.
  */
int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
		_putchar(i);

	_putchar('\n');

	return (0);
}

#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 1;
        char letter;

        while (i++ < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
        }
}

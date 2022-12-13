#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
<<<<<<< HEAD
		if (i == 'e' && i != 'q')
=======
		if (i == 'e' || i == 'q')
>>>>>>> dc930a4cc02bdb2caace84d21edffef8a78f73d0
			continue;
                putchar(i);
	}

	putchar('\n');

	return (0);
}

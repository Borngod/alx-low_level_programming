#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0(Success).
 */
int main()
{
        char i;
	
        for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
        for (i = 'A'; i <= 'Z'; ++i)
		putchar(i);
        putchar('\n');
	
	return (0);
}

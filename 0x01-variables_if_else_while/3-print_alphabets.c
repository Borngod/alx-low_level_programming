#include<stdio.h>
/**
  *main:Entry point
  *
  *Return:Always 0(Success)
  */
int main(void)
{

	char i;

        for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}

        char b;

        for (b = 'A'; b <= 'Z'; ++b)
	{
		putchar(b);
	}

        putchar('\n');

        putchar('h');

	return (0);
}

#include "main.h"

/**
  *_memset-fills the memory with a constanat byte
  *
  *@s:this a pointer
  *@b:this a variable with a char data type
  *@n:this is a variable with an int datatype
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; a++)
		s[c] = b;

	return (s);
}

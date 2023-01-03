#inlcude "main.h"

/**
  *_memcpy - prints buffer in area.
  *@dest:a variable
  *@src: A VARIABLE
  *@n: positive integer
  *
  *return: returns dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; ++a)
		dest[a] = src[a];

	return (dest);

}

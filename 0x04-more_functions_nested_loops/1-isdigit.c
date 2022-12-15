#include "main.h"
/**
  *_isdigit-checks for a digit (0 through 9).
  *@c:the digit being checked for
  *Return: returns 1 when c is a digit,
  *        returns 0 when otherwise.
  */
int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
		return (1);
	else
		return (0);
}

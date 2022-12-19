#include "main.h"

/**
  *swap_int-function that swaps the values of two integers
  *@a:this stores  value to be swapped
  *@b:this stores value to be swapped
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}

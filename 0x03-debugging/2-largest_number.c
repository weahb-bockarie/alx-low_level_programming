#include "main.h"

/**
 * large_number - return the largest of 3 numbers
 * @a: firstinterget
 * @b:second interger
 * @c:third interger
 *
 * return: largest number
 */
int lagest_number(int a, int b,  int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b ;
	}
	else
	{
		largest = c;
	}
	return (largest);
}

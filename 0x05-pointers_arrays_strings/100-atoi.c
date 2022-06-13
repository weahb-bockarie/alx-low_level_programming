#include "main.h"

/**
 *  _atio - convert strint to integer
 *  @s: the string to be converted
 *
 *  return: the interger to be convereted
 */
int _atoi(char *s)
{
	int sing = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}

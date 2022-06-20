#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n )  
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

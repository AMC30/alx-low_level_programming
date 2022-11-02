#include "main.h"

/**
 * _memset - write function that fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: number of bytes to be filled
 * Return: a pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

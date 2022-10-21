#include <main.h>

/**
 * _isdigit - checks if a char is digit
 * @c: int to be checked
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}

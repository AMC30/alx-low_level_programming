#include "main.h"
/**
 *_isalpha - check for alphabetic char
 *@c: char to be checked
 *Return: 1 if char is lower or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

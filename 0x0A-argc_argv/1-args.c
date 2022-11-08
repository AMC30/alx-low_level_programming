#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of a program
 * @argc: count argument
 * @argv: argument
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%d\n", argc - 1);

return (0);
}

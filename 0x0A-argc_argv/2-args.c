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
/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - print each argument*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}

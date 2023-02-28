#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: is the string of characters to be calculated
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}

#include "main.h"

/**
 * _islower - this checks for lower case characters
 * @c: is the character to be checked
 * Return: On success 1.
 * Else, return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

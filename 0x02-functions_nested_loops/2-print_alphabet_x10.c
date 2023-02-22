#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 time the alpabet in lower case
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char y;

	int i;

	i = 0;
	while (i < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		i++;
	}
}

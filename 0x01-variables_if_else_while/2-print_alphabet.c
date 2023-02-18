#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		putchar(lowc);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char lowc;

	for (lowc = 'z'; lowc >= 'a'; lowc--)
		putchar(lowc);

	putchar('\n');

	return (0);
}

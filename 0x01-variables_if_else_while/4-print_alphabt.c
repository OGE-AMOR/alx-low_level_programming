#include<stdio.h>

/**
 * main - prints lowercase alphabets except q and e
 * Return: Always 0
 */
int main(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		if (lowc != 'q' && lowc != 'e')
			putchar(lowc);
	}

	putchar('\n');

	return (0);
}

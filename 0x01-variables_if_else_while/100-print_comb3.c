#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int num, dig;

	for (num = 0; num < 9; num++)
	{
		for (dig = num + 1; dig <= 9; dig++)
		{
			putchar(num);
			putchar(dig);
			if (dig != num)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

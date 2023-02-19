#include <stdio.h>

/**
 * main - prints all possible combination of single digits number
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar((' '))'\n';
		}
	}

	return (0);
}

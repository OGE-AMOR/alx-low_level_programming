#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 * Return: Always 0
 */
int main(void)
{

	int num, dig;

	for (num = '0'; num < '9'; num++)
	{

	for (dig = num + 1; dig <= '9'; dig++)
	{
	if (dig != num)
	{
	putchar(num);
	putchar(dig);
	if (num == '8' && dig == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}

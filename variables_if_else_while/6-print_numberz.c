#include <stdio.h>
/**
 * main - using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar((number%10)+'0');
		number++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	int numberTwo = 0;

	while (number < 10)
	{
		numberTwo = 0;
		while (numberTwo < 10)
		{	
	
		putchar((number % 10) + '0');
		putchar((numberTwo % 10) + '0');
		if (number != 9 || numberTwo != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numberTwo++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}

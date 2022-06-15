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

	for (number = '0'; number <= '8'; number++)
	{
		for (numberTwo = '0'; numberTwo <= '9'; numberTwo++)
		{
			if (number < numberTwo)
			{
				putchar(number);
				putchar(numberTwo);
				if (number != '8' && numberTwo > number)
				{
				putchar(',');
				putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

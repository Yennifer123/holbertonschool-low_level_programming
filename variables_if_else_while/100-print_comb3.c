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

	for (number = 48; number < 58; number++)
	{
		for (numberTwo = 48; numberTwo < 58; numberTwo++)
		{
			if (number < numberTwo)
			{
				putchar(number);
				putchar(numberTwo);
				if (number == 57 && numberTwo == 56)
				{
					putchar(10);
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}

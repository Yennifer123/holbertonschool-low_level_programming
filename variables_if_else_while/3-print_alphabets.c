#include <stdio.h>
/**
 * main - using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char capitalLetter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	 while (capitalLetter <= 'Z')
        {
                putchar(capitalLetter);
                capitalLetter++;
        }
	putchar('\n');
	return (0);
}

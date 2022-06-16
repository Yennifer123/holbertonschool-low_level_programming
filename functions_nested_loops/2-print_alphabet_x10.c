#include "main.h"
/**
 *print_alphabet_x10 --  10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int times = 0;

	while (times < 10)
{
	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	times++;
	_putchar('\n');
	}
	}


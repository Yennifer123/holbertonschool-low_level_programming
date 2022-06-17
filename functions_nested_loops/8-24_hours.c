#include "main.h"
/**
 *jack_bauer--  o clock
 *
 *Return: void
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
_putchar('0' + hours / 10);
_putchar('0' + hours % 10);

_putchar(':');

_putchar('0' + minutes / 10);
_putchar('0' + minutes % 10);

_putchar(10);
}
}
}


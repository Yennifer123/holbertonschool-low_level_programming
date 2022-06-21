#include "main.h"
/**
 *print_triangle --
 *@size:number #
 */
void print_triangle(int size)
{
int i;
int j;
int k;
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(32);
}
for (k = 0; k <= i; k++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}


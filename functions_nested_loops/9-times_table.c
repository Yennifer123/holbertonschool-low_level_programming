#include "main.h"
/**
 *times_table --  checks for lowercase character.
 *
 */
void times_table(void)
{
int columna = 0;
int fila = 0;
int result = 0;
for (columna = 0; columna < 10; columna++)
{
for (fila = 0; fila < 10; fila++)
{
result = (columna * fila);
if (result >= 10)
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else
{
_putchar('0' + result);
}
if (fila != 9)
{
_putchar(44);
if ((columna * (fila + 1) < 10))
{
_putchar(32);
_putchar(32);
}
else
{
_putchar(32);
}
}
}
_putchar(10);
}
}

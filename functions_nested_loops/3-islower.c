#include "main.h"
/**
 *_islower --  checks for lowercase character.
 *@c: character
 *Return: 1 when is lowercase or 0 in other case
 */
int _islower(int c)
{
int result = 0;
if (c >= 'a' && c <= 'z')
{
result = 1;
}
return (result);
}


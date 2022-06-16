#include "main.h"
/**
 *_isalpha --  checks for lowercase or uppercase character.
 *@c: character
 *Return: 1 when is lowercase or 0 in other case
 */
int _isalpha(int c)
{
int result = 0;
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
result = 1;
}
return (result);
}


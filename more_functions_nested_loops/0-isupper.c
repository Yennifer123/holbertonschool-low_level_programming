#include "main.h"
/**
 *_supper -- checks for uppercase character.
 *
 */
int _isupper(int c)
{
int result = 1;
if (c >= 'a' && c <= 'z')
{
result = 0;
}
return (result);
}



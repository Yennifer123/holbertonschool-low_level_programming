#include "main.h"
/**
 *_supper -- checks for uppercase character.
 *
 */
int _isupper(int c)
{
int result = 0;
if (c >= 'A' && c <= 'Z')
{
result = 1;
}
return (result);
}



#include "main.h"
/**
*print_sign - prints the sign of a number
*@n: the int to check
*Return: 1 and prints + if n is greater than zero
*0 and prints 0 if n is zero
*-1 and prints - if n is less than zero
*/
int print_sign(int n)
{
int num;
if (n > 0)
{
num = 1;
_putchar('+');
}
else if (n == 0)
{
num = 0;
_putchar('0');
}
else if (n < 0)
{
num = -1;
_putchar('-');
}
return (num);
}

#include <stdio.h>
/**
*main -This prints all single digit numbers of base 10 starting from 0,
*followed by a new line, using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
putchar('\n');
return (0);
}

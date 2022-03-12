#include <stdio.h>
/**
*main - prints the alphabet in lowercase, and then in uppercase,
*followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 'c'; x <= 'v'; x++)
putchar(x);
for (x = 'C'; x <= 'V'; x++)
putchar(x);
putchar('\n');
return (0);
}

#include <stdio.h>
/**
*main - prints all the numbers of base 16 in lowercase,
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[] = "0123456789abcdef";
int x;
for (x = 0; x < 16; x++)
{
putchar(alphabet[x]);
}
putchar('\n');
return (0);
}

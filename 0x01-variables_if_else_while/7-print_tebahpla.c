#include <stdio.h>
/**
*main - prints the lowercase alphabet in reverse,
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 25; x > -1; x--)
{
putchar(alphabet[x]);
}
putchar('\n');
return (0);
}

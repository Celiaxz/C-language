#include <stdio.h>
/**
*main - prints the alphabet in lowercase,
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 0; x < 26; x++)
{
putchar(alphabet[x]);
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
*main - prints the alphabet in lowercase, then in uppercase,
*followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 0; x < 26; x++)
{
putchar(alphabet[x]);
char capitalAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (x = 0; x < 26; x++)
{
putchar(capitalAlpha[x]);
putchar('\n');
return (0);
}

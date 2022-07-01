#include <stdio.h>

/**
 * main - print the lowercase alphabet
 * Description: Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char g = 'z';

while (g >= 'a')
{
putchar(g);
g--;
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - prints numbers
 * Description: "prints all the numbers of base 16 in lowercase"
 * Return: 0
 */
int main(void)
{
int jop = '0';

while (jop <= '9')
{
putchar(jop);
jop++;
}
jop = 'a';

while (jop <= 'f')
{
putchar(jop);
jop++;
}
putchar('\n');
return (0);
}

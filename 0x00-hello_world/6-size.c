#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (success) 
 */
int main(void)
{
char ch;
int in;
long lng;
long long llong;
float d;

printf("Size of char: %lu byte(s)\n", sizeof(ch));
printf("size of an int: %lu byte(s)\n" , sizeof(in));
printf("Size of a long int: %lu byte(s)\n", sizeof(lng));
printf("Size of a long long int: %lu byte(s)\n", sizeof(llong));
printf("Size of a float: %lu byte(s)\n", sizeof(d));
return (0);
} 

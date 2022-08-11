#include <stdio.h>
#include <stdlib.h>

void print(void) __attribute__ ((constructor));

/**
* print -  prints a string
*
*Return: Always 0 on success
*/
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>
#include <stdlib.h>

/**
*Apply the constructor attribute to print()
*so that it is executed before main()
*/
void print (void) __attribute__ ((constructor));

/**
* print -  prints a string
*
*Return: Always 0 on success
*/
void print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

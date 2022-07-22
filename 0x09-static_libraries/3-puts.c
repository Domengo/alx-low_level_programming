#include <stdio.h>
void _puts(char *s)
{
for (int i=0; *(s + i) != '\0'; i++)
{
    putchar(*(s + i));

} 
putchar('\n');
}

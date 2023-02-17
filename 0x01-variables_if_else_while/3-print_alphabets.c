#include <stdio.h>
/*more headers at this point*/
/*main - entry point*/
/*return: value 0 means success*/
int main(void)
{
char c;
c = 'a';
c = 'A';
while (c <= 'a' || 'A')
{
putchar(c);
c++;
}
return (0);
}

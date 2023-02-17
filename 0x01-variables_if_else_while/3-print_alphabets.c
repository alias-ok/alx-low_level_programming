#include <stdio.h>
/*more headers at this point*/
/*main - entry point*/
/*return: value 0 means success*/
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}

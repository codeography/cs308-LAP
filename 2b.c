#include<stdio.h>

int main()
{
int a, b, *x=NULL, *y, **z;
z=&y;
*z=x;
printf("x and y contain address -> %p or %ld\n", (void*)y, (long int)y);
//*y=5;
b=*y;
printf("b contains -> %d\n", b);
return 0;
}

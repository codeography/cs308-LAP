#include<stdio.h>

int main()
{
int a = 0, *x;
printf("x contains -> %p or %ld\n", (void*)x, (long int)x);
*x=1;
return 0;
}

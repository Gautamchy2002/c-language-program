#include <stdio.h>
#include <math.h>

int main()
{
   int i,n, square;
   printf("enter the value");
   scanf("%d,%d",&i,&n);
   square = pow (i,n);
   printf("square of the no is=%d",square);

    return 0;
}
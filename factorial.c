#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,f=1;
    printf("enter the integer");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        f= f* i; 
    }
    printf("the factorial = %d", f);
    return 0;
}
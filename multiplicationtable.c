#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("enter the number", n);
    scanf("%d", &n);
    for ( i = 1; i < 11; i++)
    {
        printf("%d*%d=%d\n", n, i,n*i);
    }
    return 0;
}
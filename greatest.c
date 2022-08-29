#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 2, b = 1, c = 5;
    if (a>b && a>c)
        printf("a is greatest");
        else if (b>a && b>c)
            printf("b is greatest");
            else if(c>a && c>b)
                printf("c is greatest");
            return 0;
}
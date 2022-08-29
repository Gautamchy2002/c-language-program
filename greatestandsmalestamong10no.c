#include<stdio.h>
#include<conio.h>
int main()
{
    int ele, sm, lar,n,i;
    printf("total numbers of elements", ele);
    scanf("%d", &ele);
    printf("enter first numnber",n);
    scanf("%d", &n);
    lar = n;
    sm = n;
    for ( i = 1; i < ele-1; i++)
    {
        printf("enter another number", n);
        scanf("%d", &n);
        if (n > lar)
            lar = n;
        if(n<sm)
            sm = n;
        printf("the largest number is%d\n", lar);
        printf("the smallest number is%d\n", sm);
    }
    return 0;
}
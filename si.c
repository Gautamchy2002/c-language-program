#include<stdio.h>

    int main()
    {
        int  p, t;
        float si,r;
        printf("Enter the value of P,r,t");

        scanf("%d,%d,%f" &p,&t,&r);
        si = p * r * t / 100;
        printf("%f", si);
        
    }

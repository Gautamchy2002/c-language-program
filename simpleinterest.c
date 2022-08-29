#include <stdio.h>
#include <math.h>
void main()
{
    float ci, p, r, n, t;
    printf("enter the value of p,r,n,t");
    ci = p*pow((1 + r / 100),n,t);
    scanf("%f,%f,%f,%f", &p, &r, &n, &t);
    printf("compound interest= % f",ci);
}


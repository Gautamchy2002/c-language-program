#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[i],n,l;
    printf("enter the number of array");
    scanf("%d",&n);
    printf("enter the aray");
       for (i=0; i<n; i++)
    scanf("%d",&a[i]);
     l=a[0];
   for (i=1; i<n; i++)
   {
    if(l>a[i])
    printf("largest number is %d",l);
    else
    l=a[i];
   }
    return 0;
}
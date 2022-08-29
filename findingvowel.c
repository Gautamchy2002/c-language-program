#include<stdio.h>
#include<conio.h>
int main()
{
    char a[20];
    int i,v=0,s=0,d=0;
    printf("enter the string");
   gets(a);
    for(i=0; a[i]!='\0';i++)
    {
      d=d+1;
    }
    printf("the lengh is %d",d);
    
    for (i=0; a[i]!='\0';i++)
    {
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
        {
        v=v+1;
        }
        else if(a[i]==' ')
        {
        s=s+1;
        }
    }
    printf(" the vowel is %d",v);

    printf("the consonant is %d",d-(v+s));
    return 0;
}
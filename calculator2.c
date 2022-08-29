#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a, b,c, choice;

    printf("enter your choice\n");
    printf("1.addition\n 2.subtraction\n 3.multiplication\n 4. division\n");
    scanf("%d", &choice);
    printf("enter two numbers");
    scanf("%d\n%d", &a, &b);
    switch(choice)
    {
    case 1 :
        c = a + b;
        printf("%d+%d=%d",a,b,c);
        break;
    case 2 :
        c = a - b;
        printf("%d-",c);
        break;
    case 3 :
        c = a * b;
        printf("%d",c);
        break;
    case 4 :
        c = a / b;
        printf("%d",c);
        break;
    
    }
    return 0;
}
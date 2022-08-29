#include <stdio.h>
int fabonaci(int num);
int n;
int main()
{
    int i;
    printf("enter the no.");
    scanf("%d", &n);
    printf("fibonaci series upto %d\n", n);
    for (i = 0; i <= n; ++i)
    {

        printf(" %d\n", fabonaci(i));
        
    }
}   
    int fabonaci(int num)
        {
            if (num == 0)
                return 0;

            else if (num == 1)
                return 1;

            else
                return (fabonaci(num - 1) + fabonaci(num - 2));
        }
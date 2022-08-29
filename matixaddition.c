#include <stdio.h>
#define max 50
int main ()

{
    int m1[max][max], m2[max][max];
    int i,j,n;
    printf("enter the order of matrix :");
    scanf("%d", &n);

    printf("enter the element of the m1 :\n");
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("enter the element of the m2 :\n");
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("sum of the matrix :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        { m1[i][j] = m1[i][j]+m2[i][j];
        printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    return 0;
}

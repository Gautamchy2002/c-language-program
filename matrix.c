#include<stdio.h>
#define MAX 50
int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX];
    int i, j, n;
    printf("Enter the order of matrix :");
    scanf("%d", &n);

    printf("Enter the Element of the Mat1 :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the Element of the Mat2 :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("SUM of the matrix :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            mat1[i][j] = mat1[i][j]+mat2[i][j];
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
    }

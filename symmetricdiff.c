#include <stdio.h>

int main()
{
    int setA[10], setB[10], setC[10],i,j,flag=0,k=0,e=0;
    setA = {1,8,5,6,4};
    setB = {8,5,7,5,3};
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (setA[i]==setB[j])
            {
                flag = 2;
            }
            if(flag!=2)
            {
                setC[k++] = setA[i];
            }
            flag = 0;
        }
        
    }
    
for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (setA[j]==setB[i])
            {
                flag = 2;
            }
            if(flag!=2)
            {
                setC[k++] = setB[i];
                e++;
            }
            flag = 0;
        }
        
    }

    for (i = 0; i <= e+1;i++)
    {
        printf("\nSymmetric difference is %d",setC[i]);
    }

        return 0;
}

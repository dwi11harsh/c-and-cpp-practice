#include<stdio.h>
int main()
{
    int a[2][3], b[2][3], c[2][3], i, j;
    printf("enter the first matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" enter element of row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" enter element of row %d and column %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("the first matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        
            printf("%d\t ", a[i][j]);
        }
    }
    printf("the second matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        
            printf("%d\t ", b[i][j]);
        }
    }
    //this gives the addition of the two matrices
        for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("the final addition matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        
            printf("%d\t ", c[i][j]);
        }
    }

    
}
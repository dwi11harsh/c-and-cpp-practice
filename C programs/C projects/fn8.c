#include<stdio.h>
int sq(int);
int main()
{
    int a, i;
    float r2, res = 0;
    printf("\nenter the digit:");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        r2 = 1/(float)sq(i);
        res = res + r2;
    }
    printf("required result of the series is %f", res);
}
int sq(int a)
{
    int i, res = 0;
    for(i=a;i>=0;i--)
    {
        res = res + i*i;

    }
    return res;
}
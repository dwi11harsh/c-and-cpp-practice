#include<stdio.h>


int ser(int);
int sum(int);
int main()
{
    int a, b;
    printf("enter the numbers:");
    scanf("%d", &a);
    b = ser(a);
    printf("the required result of the series is %d", b);
}

int ser(int a)
{
    int i, b=1;
    float c = 0;
    for(i=1;i<=a;i++)
    {
        c = c + (i*i)/((float)sum(a));
    }
    return c;
}
int sum(int a)
{
    int i, s=1;
    for(i=a;i>=0;i--)
    {
        s = i*i;
    }
    return s;
}
#include<stdio.h> 
int main()
{
    printf("enter two digits: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum=a+b;
    int sub=a-b;
    int m=a*b;
    int d=a/b;
    printf("addition=%d, substraction=%d, multiplication=%d, division=%d", sum, sub, m, d);
    return 0;
}
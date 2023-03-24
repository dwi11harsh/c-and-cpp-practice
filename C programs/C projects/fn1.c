/* program to add and substract two numbers using functions */
#include<stdio.h>
int add(int, int);
int sub(int, int);
int main()
{
    int a, b, c, d;
    printf("enter two digits:");
    scanf("%d %d", &a, &b);
    c = add(a,b);
    d = sub(a,b);
    printf("\n main line:%d %d %d %d", a, b, c, d);
    return 0;
}
int add(int a, int b)
{
    int z = a + b;
    printf("\n result after addition is %d", z);
    return z;
}
int sub(int a, int b)
{
    int z = a - b;
    printf("\n result after substraction is %d",z);
    return z;
}
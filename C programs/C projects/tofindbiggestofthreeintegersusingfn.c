#include<stdio.h>
int cmpr(int, int, int);
int main()
{
    int a, b, c, grtr;
    printf("\n enter three digits:");
    scanf("%d %d %d", &a, &b, &c);
    grtr = cmpr(a, b, c);
    printf("\n greatest number among %d %d %d is %d", a, b, c, grtr);
    return 0;
}

int cmpr(int a, int b, int c)
{
    if (a>b && a>c)
    return a;
    else if(b>c && b>a)
    return b;
    else
    return c;
}
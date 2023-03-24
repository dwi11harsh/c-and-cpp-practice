#include<stdio.h>
int Fact(int);
int main()
{
    int n, r, i, r1, r2, rf;
    float res;
    printf("\nenter the value of n in C(n/r): ");
    scanf("%d",&n);
    printf("\nenter the value of r in C(n/r): ");
    scanf("%d",&r);
    r1 = Fact(n);
    r = n-r;
    r2 = Fact(r);
    rf = Fact(r);
    res = r1/((float)rf*(float)r2);
}
int Fact(int a)
{
    int i, res = 1;
    for(i=1;i<=a;i++)
    {
        res = res * i;
    }
    return res;
}
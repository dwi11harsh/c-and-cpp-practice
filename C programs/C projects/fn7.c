#include<stdio.h>
#include<math.h>
int Fact(int);
int main()
{
    int i, f, s, a;
    float res = 0;
    printf("enter the digit:");
    scanf("%d", &a);
    for( i = 1; i >= a; i++ )
    {
        f = Fact(i);
        s = pow(i,2);
        res = res + s/(float)f;
    }
    printf("\n required result is %f", res);
    return 0;
}
int Fact(int x)
{
    int i, result = 1;
    for( i = x; i >= 0; i--)
    {
        result = result * i;
        return result;
    }
}
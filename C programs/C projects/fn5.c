#include<stdio.h>
int fact(int);
int main()
{
    /*
    program to find the end result of the following series
    result = 1/1! + 1/2! + 1/3! + ...
    where the value entered from the keyboard will give the number upto which the series has to go.
    */
    int i, n, f;
    float result=0;


    printf("\n enter the digit:");
    scanf("%d",&n);


    for( i = 1 ; i <= n ; i++ )
    {
         f= fact(i);
         result = result + 1/(float)f;
    }

    printf("\nrequired result is %f\n", result);

}



int fact(int x)
{
    int i, res = 1;
    for( i = x; i > 0; i--)
        res = res * i;

    return res;
}
/* program to find the result of the following series using function
result = 1/1 + 1/2 + 1/3 + 1/4 + ......
in this program the entered digit is the number of terms upto which the sum has to be calculated
*/
#include<stdio.h>
int sum(int);
int main()
{
    int a;
    
    printf("\n enter the digit:");
    scanf("%d",&a);
    sum(a);
}
    
int sum(a)
{
    int i;
    float res=0;
    for(i=1;i<=a;i++)
    {
        res = res + 1/(float)i;
    }
    printf("\nfinal result of the series is %f", res);

}
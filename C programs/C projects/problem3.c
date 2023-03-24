//this program is to find out the answer of a particular series 
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
        printf("\nstarting value is %d", i);
        printf("\nreturned value from factorial function is %d", f);
        s = pow(i,i);
        printf("\nfinal value after power raise is %d", s);
        res = res + s/(float)f;
        printf("final value after %d time is %f", i, res);
    }
    printf("\n final result is %f", res);
    
}




int Fact(int x)
{
    int i, result = 1;
    for( i = x; i > 0; i--)
    {
        result = result * i;
    }
    return result;
}
/* at start i was facing problems as i was not getting the answer i was expecting 
so i entered multiple printf statements so that i could understand the flow of the program
but i was unable to get any newly entered printf statements
help me to get these new printf statements
newly entered statements are in 14 15 17 and 19th line rest are older ones
*/
/* program to get the numbers printed which are divisible by any particular number
where the starting and stopping limit between which the divisible nmbers are to be
tested are entered through keyboard.
*/
#include<stdio.h>
int main()
{
    int a, b, c, i, j;

    printf("enter the starting limit from where the counting starts: ");
    scanf(" %d", &a);
    printf("enter the stopping limit from where the counting starts: ");
    scanf(" %d", &b);
    printf("enter the number of which the divisibility is to be tested: ");
    scanf(" %d", &c);


    for( i=a; i<=b; i++ )
        if( i%c==0 )
            for( j=i; j<=b; j=j+c )
                printf(" %d \n", j);
}

/* observe the solution as it repeats itself this is cousing error in final output */
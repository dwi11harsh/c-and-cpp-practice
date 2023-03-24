/* program to get the numbers printed which are divisible by any particular number
where the starting and stopping limit between which the divisible nmbers are to be
tested are entered through keyboard.
*/
#include<stdio.h>
int main()
{
    int  i, a, b;

    printf("the startng limit: ");
    scanf("%d", &a);
    printf("the stopping limit: ");
    scanf("%d", &b);
    printf("enter the number of which the divisibility is to be checked: ");
    scanf("%d", &i);

    for( i=a; i<=b; i++)
        if(i%3==0)
            printf("\n %d ", i);
} 
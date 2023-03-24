//program to check wheather entered year is a leap year or not.

#include<stdio.h>
int main()
{
    int yr;
    
    printf("enter the year: ");
    scanf("%d", &yr);

    if( yr%4==0 )
    {
        if(yr%100==0)
        {
            if(yr%400==0)
            printf("entered year is leap year.\n");
            else
            printf("entered year is not leap year.");

        }
    }
    else 
    printf("entered year is not leap year.\n");

}
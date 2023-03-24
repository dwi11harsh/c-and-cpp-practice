//to check wheather entered character is capital or small
#include<stdio.h>
int main()
{
    char a;


    printf("\n enter the character:");
    scanf("%c", &a);


    if( a>=65 && a<=90 )
    printf("\nentered character is a capital case one.");

    else if( a>=97 && a<=122 )
    printf("\nentered character is a small case one.");

    else
    printf("\nentered character is neihter in small case nor in capital case.");

}
/*
if we read the character with %d instead of %c in 9th line
we do not get the desired line
why?
*/
/* program to check whether entered number is even or odd using functions */
#include<stdio.h>
int  compare(int);
int main()
{
    int a, res;
    
    printf("enter the digit which is to be compared: ");
    scanf("%d", &a);

    res = compare(a);
}

int compare(int a)
{
    
    if( a%2==0)
    printf("\n entered number is even \n");

    else
    printf("\n entered number is odd \n");
}
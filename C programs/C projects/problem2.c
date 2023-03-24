//program to give insurance 
//problem is faced while we run the program as we do not get the desired output



#include<stdio.h>
int main()
{  


    int age;
    char sex, status, m, f, u, i;

    printf("\nenter sex of the driver('m' for male and 'f' for female):");
    scanf("%c ", &sex);

    printf("\nenter age of the driver:");
    scanf("%d ", &age);


    printf("\nenter marital status of the driver('u' for unmarried 'i' for married):");
    scanf("%c ", &status);


    if( ( status == i) || ( status == u && sex == m && age > 30 ) || ( status == u && sex == f && age > 25) )
    printf("individual is eligible for the insurance claim");
    
    else
    printf("individual is not eligible for the claim");
    return 0;
}
/*the problem which i am facing in this particular program is that 
when i run this one using terminal i get following output in first step


enter marital status of the driver:


in which i enter whatever i want then in following step i expect following outcome


enter sex of the driver:


in which i should be able to enter any character of my choice,
 but instead i get the following outcome 


enter sex of the driver:
enter the age of the driver:
*/
#include<stdio.h>
int main()
{


    char sex, status;
    int age;


   printf("\nenter marital status of the driver:");
   scanf("%c", &status);
   printf("\nenter sex of the driver:");
   scanf("%c", &sex);
   printf("\nenter the age of the driver:");
   scanf("%d", &age);

}   


/*  what am i suppposed to do to get the desired outcome
i want this code to take the required data after i have entered the previous one*/
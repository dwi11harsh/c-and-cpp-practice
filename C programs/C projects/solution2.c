//program to give insurance to a particular type of drivers where data is entered through keyboard
//problem is faced while we run the program as we do not get the desired output

#include<stdio.h> 
int main() 
{

  int age;
  char sex, status , m, f, i, u;
  
 
  printf("\nenter sex of the driver('m' for male and 'f' for female):");
  scanf("%c", &sex);
  
  printf("\nenter age of the driver:");
  scanf("%d", &age);
  
  printf("\nenter marital status of the driver('u' for unmarried 'i' for married):"); 
  scanf("%c ", &status);



  if( ( status == i) || ( status == u && sex == m && age > 30 ) || ( status == u && sex == f && age > 25) ) 
  printf("\nindividual is eligible for the insurance claim"); 


  else 
  printf("\nindividual is not eligible for the claim\n");

return 0;
    
}

/* problem was solved by removing spaces after %c, %d of 11th, 14th line and by adding spaces after %c of the 19th line 
if anything else is done with the spaces and we do not get our desired output
we have acheived the solution 
but we still do not know how is this solution working*/
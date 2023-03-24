// passing pointers to functions

/*
previously we use to send the value to a function and receive the final answer 
that method was known as pass by value
in this method the value of the variable was sent and after the function execution the value of the variable was the same as before

but using pointers we can send the address of our variable and if any changes are made to the value of the variable in the other function
the value of the function will change in the main function also

*/

#include<iostream>
using namespace std;
 

                     void swap ( int *a , int *b )
                     {
                         int temp = *a ;
                         *a = *b;
                         *b = temp;
                     }

int main()
{
    int a = 2 ;
    int b = 4 ;

    

    swap( &a , &b );                 // pass by reference
    cout << a << "  " << b << endl;
}
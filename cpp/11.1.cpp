// POINTERS : pointers are the variables that store the address of other variables ;
// Pointers are stored in hexadecimal form

/*
Getting started with the Pointers
Every variable is stored in the memory and each memory location has its own
memory address. It enables us to pass variables by reference.

‘&’ Operator: It gives the address of the variable.
‘*’ Operator: It gives the value stored at the address, i.e dereferences the value
stored at the address
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10 ;
    int *aptr;   // if we want to point at an integer then the pointer should also be integer type 
    // whatever the datatype of the variable the pointer should also be of the same datatype
    aptr = &a;

    cout << &a << endl ;    // memory location
    cout << aptr << endl ;  // memory location

    cout << *aptr << endl ;  // variable value

    // we can also change the value of the variable without even using it ;
    *aptr = 20 ;
    cout << a << endl ;

    // if we were to increment the pointer by 1 the output of the pointer will increase by 4
    // due the fact that the memory location of integers are in the order of 4 bytes 
    // so if we increase on byte the location will move by 4 bits

    // in case of char the pointer will move by 1 on increment as the char only take one byte

    aptr++ ;
    cout << aptr << endl ;  // memory location increased by 4
    
    /*
    POINTER ARITHMETIC

    we can only use ++ , -- , + , - in pointers
    */
}
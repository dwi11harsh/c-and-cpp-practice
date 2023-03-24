// POINTERS AND ARRAYS

/*
we cannot use pointer arithmetic in the pointers of array elements 
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] = { 10 , 20 , 30 };

    cout << *arr << endl ; // this will give the very first element of the array

    int *ptr = arr ;   // this will store the address of the first element of the array

    for ( int i = 0 ; i < 3 ; i++ )
    {
        cout << *ptr << endl;
        ptr ++ ;
    }

    return 0 ;
}
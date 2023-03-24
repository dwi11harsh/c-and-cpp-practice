// following is the other way of printing addresses of elements of an array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = { 10 , 20 , 30 };

    cout << *arr << endl ; 

    

    for ( int i = 0 ; i < 3 ; i++ )
    {
        cout << *(arr + i) << endl; // we cannot use arr ++ as it is illegal and any value of array pointer cannot be modified
    }

    return 0 ;
}
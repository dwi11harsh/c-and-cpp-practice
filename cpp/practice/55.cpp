// INSERTION SORT - INSERT AN ELEMENT FROM UNSORTED ARRAY TO ITS CORRECT POSITION IN SORTED ARRAY

#include<iostream>
using namespace std;

void printArray ( int arr [] , int n )
{
    cout << endl ;

    for ( int i = 0 ; i < n ; i ++ )
    {
        cout << arr [ i ] << "   " ;
    }

    cout << endl ;
}

int main()
{
    int n ;
    cin >> n ;

    int arr [ n ] ;

    for ( int i = 0 ; i < n ; i ++ )
       {
           cin >> arr [ i ] ;
       }


    for ( int i = 1 ;  i < n ; i ++ )
    {
        int current = arr [ i ] ;
        int j = i - 1 ; 

        while ( j >= 0 && arr [ j ] > current )
        {
            arr [ j + 1 ] = arr [ j ] ;
            j -- ;
        }

        arr [ j + 1 ] = current ;
    }

    printArray ( arr , n ) ;

    return 0 ;
}
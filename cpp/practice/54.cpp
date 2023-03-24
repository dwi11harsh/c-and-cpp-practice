// BUBBLE SORT - REPETEDLY SORT TWO ELEMENTS IF THEY ARE IN WRONG ORDER ;

#include<iostream>
using namespace std;


void printArray ( int arr[] , int n )
{
    cout << endl ;

    for ( int i = 0 ; i < n ; i ++ )
    cout << arr[ i ] << "   " ;

    cout << endl ;
}


int main()
{
    int size ;
    cin >> size ;

    int arr [ size ] ;

    for ( int i = 0 ; i < size ; i ++ )
         cin >> arr [ i ] ;

    int counter = 0 ; 

    while ( counter < size )
    {
         for ( int i = 0 ; i < size - counter ; i ++ )
         {
                if ( arr [ i ] > arr [ i + 1 ] )
                {
                    int temp = arr [ i ] ;
                    arr [ i ] = arr [ i + 1 ] ;
                    arr [ i + 1 ] = temp ;
                }
         }

         counter ++ ;
    }

    printArray ( arr , size ) ;

    return 0 ;
}
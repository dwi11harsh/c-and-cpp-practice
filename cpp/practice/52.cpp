// SEARCHING A KEY USING BINARY SEARCH METHOD
#include<iostream>
using namespace std;

int binarySearch( int arr[] , int n , int key )
{
         int s = 0 ;
         int e = n - 1 ;

         while ( s <= e )
         {
             int mid = ( s + e ) / 2 ;

             if ( arr [ mid ] == key )
               return mid ;

            else if ( arr [ mid ] > key )
              e = mid - 1 ;

            else if ( arr [ mid ] < key )
              s = mid + 1 ;

         }

         return - 1 ;
}

int main()
{
    int size;
    cin >> size ;

    int arr[ size ] ;

    for ( int i = 0 ; i < size ; i ++ )
        cin >> arr [ i ] ;

    int key ;

    cin >> key ;

    cout << binarySearch ( arr , size , key ) << endl ;

    return 0 ;
}
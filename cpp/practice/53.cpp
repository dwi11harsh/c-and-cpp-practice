// SORTING AN ARRAY USING SELECTION SORT
// PICK THE SMALLEST NUMBER AND SWAP IT FOR ITS POSITION IN THE SORTED ARRAY

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
    int n ;
    cin >> n ;

    int arr [ n ] ;

    for ( int i = 0 ; i < n ; i ++ )
           cin >> arr [ i ] ;


      for ( int i = 0 ; i < n ; i ++ )
      {

          for ( int j = i + 1 ; j < n ; j ++ )
              {
                    if ( arr [ j ] < arr [ i ] )
                    {
                        int temp = arr [ i ] ;
                        arr [ i ] = arr [ j ] ;
                        arr [ j ] = temp ;
                    }
              }
      }


      printArray ( arr , n ) ;

      return 0 ;
    
}
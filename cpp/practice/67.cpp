#include<iostream>
using namespace std;

void printArray ( int array[] , int size )
{
    for (int i = 0 ; i < size ; i++ )
    {
        cout<< array[ i ] << "  ";
    }
}

int main()
{
    int n;
	cin >> n ;
	int arr [ n ] ;
	for ( int i = 0 ; i < n ; i ++ )
		cin >> arr [ i ] ;

    for ( int i = 1 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < i ; j ++ )
        {
            if ( arr [ j ] > arr [ j + 1 ] && ( j + 1 ) < n )
            {
                int temp = arr [ j ] ;
                arr [ j ] = arr [ j + 1 ] ;
                arr [ j + 1 ] = temp ;
            }
        }
    }

    printArray ( arr , n ) ;
}
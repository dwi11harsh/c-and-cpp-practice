#include<iostream>
using namespace std;



int main()
{
	int n;
	cin >> n ;
	int arr [ n ] ;
	for ( int i = 0 ; i < n ; i ++ )
		cin >> arr [ i ] ;

	int counter = n ;
	int x = 1 ;

	 while ( counter !=0 )
	 {
	 	for ( int i = 0 ; i < n - x ; i ++ )
	 	{
	 		if( arr [ i ] > arr [ i + 1 ] )
	 		{
	 			int temp = arr [ i + 1 ];
	 			arr [ i + 1 ] = arr [ i ] ;
	 			arr [ i ] = temp ; 
	 		}

	 	}
	 	x ++ ;
	 	counter -- ;
	 }

     for ( int i = 0 ; i < n ; i ++ )
     cout << arr [ i ] << "   ";

     cout << endl ;
}
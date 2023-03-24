// MAX 0F i 


#include<iostream>
#include<climits>
using namespace std;



int main()
{
    int n;
    cin >> n ;

    int arr [ n ] ;

    for ( int i = 0 ; i < n ; i ++ )
    {
        cin >> arr [ i ] ;
    }

    int mx = arr [ 0 ] ;
    int counter = 0 ;

    while ( counter < n )

    {
        mx = max ( mx , arr [ counter ] ) ;
        cout << mx << "   " ;

        counter ++ ;
    }

}
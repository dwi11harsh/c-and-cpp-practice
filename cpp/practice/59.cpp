#include<iostream>
using namespace std;

int main()
{
    int m , n ;
    cin >>m >> n;
    int a  [ m ] [ n ] ;

    for ( int i = 0 ; i < m ; i ++ )
    {
        for ( int j = 0 ; j < n ; j ++ )
        {
            cin >> a [ i ] [ j ] ;
        }
    }

    int res = 0 ; 

    for ( int i = 0 ; i < m ; i ++ )
    {
        for ( int j = 0 ; j < n ; j ++ )
        {
            if ( i == j )
            {
                res += a [ i ] [ j ] ;
            }
        }
    }

    cout << endl << res << endl ;

    return 0 ;
}
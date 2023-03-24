/* pascal triangle
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/

#include<iostream>
using namespace std;

int fact ( int a )
{
    int res = 1 ;
    for ( int i = 1 ; i <= a ; i ++ )
    {
        res *= i ;
    }
    return res ;
}

int comb ( int n , int r)
{
    return fact ( n ) / ( fact ( r ) * fact ( n - r ) );
}

int main()
{
    int a;
    cin >> a ;

    for ( int i = 1 ; i < a ; i ++ )
    {
        cout << endl ;
    
        for ( int j = 0 ; j <= i ; j ++ )
        {
            cout << comb ( i , j ) << " ";
        }

        cout << endl ;
    }

}
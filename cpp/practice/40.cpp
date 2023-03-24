// finding nCr where res=fact(n)/(fact(r)*fact(n-r));

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
    int n , r ;
    cin >> n >> r ;

    cout << comb( n , r ) << endl ;
}
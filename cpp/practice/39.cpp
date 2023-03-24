// factorial of a ;

#include<iostream>
using namespace std ;

int factorial ( int a )
{
    int ans = 1 ;

    for ( int i = 1 ; i <= a ; i ++ )
    {
        ans *= i ;
    }

    return ans ;
}

int main()
{
    int a ;
    cin >> a ;

    cout << factorial( a ) << endl ;
}
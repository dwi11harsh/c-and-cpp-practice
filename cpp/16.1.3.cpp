// factorial using recursion 

#include<iostream>
using namespace std;

int factorial ( int n )
{
    if ( n == 0 )
       return 1 ;

    return n * factorial ( n - 1 ) ;
}

int main()
{
    int a;

    cin >> a ;

    cout << factorial ( a ) << endl ;

    return 0 ;
}
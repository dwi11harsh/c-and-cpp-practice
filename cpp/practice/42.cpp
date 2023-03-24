// SUM OF FIRS N NATURAL NUMBERS

#include<iostream>
using namespace std;

int sum ( int a )
{
    int res = 0 ;

    for ( int i = 1 ; i <= a ; i ++ )

    {
        res += i ;
    }

    return res ;
}

int main()
{
    int a ;
    cin >> a ;

    cout << sum ( a ) << endl ;
}
// binary to decimal using functions

#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal( int a )
{
    int res = 0 , i = 0 ;

    while( a > 0 )
    {
        int temp = a % 10 ;
        res += temp * pow ( 2 , i ) ;
       i ++ ;
       a /= 10 ;
    }

    return res ;
}

int main()
{
    int a ;
    cin >> a ;

    cout << binaryToDecimal( a ) << endl ;

    return 0 ;
}
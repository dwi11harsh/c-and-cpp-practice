// DECIMAL TO OCTAL

#include<iostream>
using namespace std;

int reverse ( int a )
{
    int res = 0 ;

    while ( a > 0 )
    {
        res = res * 10 + ( a % 10 ) ;

        a /= 10 ;

    }

    return res ;

}

int decimalToOctal ( int a )
{
    int res = 0 ;

    while ( a > 0 )
    {
        res = res * 10 + ( a % 8 ) ;

        a /= 8 ;

    }

    int rev = reverse ( res ) ;

    return rev ;

}

int main()
{
    int a;
    cin >> a ;

    cout << decimalToOctal ( a ) << endl ;

    return 0 ;
}
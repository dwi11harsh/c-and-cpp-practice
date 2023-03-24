// BINARY TO DECIMAL

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

int decimalToBinary( int a )
{
    int res = 0 ;

    while( a > 0 )
    {
      res = res * 10 + ( a % 2 );
      a /= 2 ;
    }

    int rev = reverse ( res ) ;

    return rev ;

}

int main()
{
    int a ;

    cin >> a ;

    cout << decimalToBinary ( a ) << endl ;

    return 0 ;
}
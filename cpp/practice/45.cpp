// OCTAL TO DECIMAL

#include<iostream>
#include<cmath>
using namespace std;

int octalToDecimal( int a )
{
    int res = 0 ,  i = 0 ;

    while ( a > 0 )
      {
          res += (a%10) * pow ( 8 , i ) ;
          i ++ ;
          a /= 10 ;
      }

    return res ;
}

int main()
{
    int a;
    cin >> a ;

    cout << octalToDecimal(a) << endl ;

    return 0 ;
}
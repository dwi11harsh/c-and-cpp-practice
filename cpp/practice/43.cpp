// check whether entered digits are pythegorian triplet where first entered digit is the greatest

#include<iostream>
#include<cmath>
using namespace std;

bool pyth( int a, int b , int c)
{
    if( pow ( a , 2 ) == pow ( b , 2 ) + pow ( c , 2 ) )
       return true ;

    else
       return false ;
}

int main()
{
    int a , b , c ;

    cin >> a >> b >> c ;

    if ( pyth ( a , b , c ))
    cout << "PYTHEGORIAN TRIPLET" << endl ;

    else
    cout << "NOT A PYTHEGORIAN TRIPLET" << endl ;
}
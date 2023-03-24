// check if entered num is armstrong or not

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a ;
    cin >> a ;

    int b = a ;

    int rev = 0 ;

    while ( a > 0 )
    {
        int ans = a % 10 ;

        rev = rev + pow ( ans , 3 );

        a /= 10 ;
    }

    if ( rev == b )
    cout << "ARMSTRONG NUMBER" << endl ;

    else
    cout << "NOT ARMSTRONG NUMBER" << endl ;

}
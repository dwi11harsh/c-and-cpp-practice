// raising to a power 

#include<iostream>
using namespace std;

int power( int n , int p )
{
    if ( p == 0 )
       return 1 ;
    
    int prevPower = power ( n , p - 1 );

    return n*prevPower ;

}

int main()
{
    int a , b ;

    cin >> a >> b ;

    cout << power ( a , b ) << endl ;

    return 0 ;
    
}
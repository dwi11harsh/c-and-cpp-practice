// check prime using functions ;

#include<iostream>
#include<cmath>
using namespace std;

bool Prime( int a )
{
    
    for ( int i = 2 ; i <= sqrt(a) ; i ++ )
    {
        if( a % i == 0 )
           return false ;
    }

    return true; 
}

int main()
{
    int a;
    cin >> a;

    if( Prime(a))
        cout << "PRIME" << endl ;

    else
        cout << "NON-PRIME" << endl ;


    return 0 ;
    
}
// print the nth fibonacci number using recursion 

#include<iostream>
using namespace std;

int fibonacci ( int a )
{
    if ( a == 1 )
       return 0 ;
    
    else if ( a == 2 )
       return 1 ;

    return fibonacci ( a - 1 ) + fibonacci ( a - 2 ) ;

}

int main()
{
    int  n ;
    
    cin >> n ;

    cout << fibonacci ( n ) << endl ;

    return 0 ;


}
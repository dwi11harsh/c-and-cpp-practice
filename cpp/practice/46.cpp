#include<iostream>
#include<string>
using namespace std;

int hexaToDecimal( string a )
{
    int res = 0 ;
    int x = 1 ;
    
    for ( int i = a.size() - 1 ; i >=0 ; i -- )
        {
            if ( a[i] >= '0' && a[i] <= '9' )
            {
                res += x * ( a[i] - '0' );
            }
            
            if ( a[i] >= 'A' && a[i] <= 'F' )
            {
                res += x * ( a[i] - 'A' + 10 );
            }
            
            x *= 16 ;
        }
        
    return res ;
    
}

int main()
{
    string a ;
    cin >> a ;
    
    cout << hexaToDecimal( a ) << endl ;
}


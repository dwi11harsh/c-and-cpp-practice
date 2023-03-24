/* SETBIT
setting a bit means placing 1 in the given place

UNSET
unsetting means placing 0 in the given place

*/

#include<iostream>
using namespace std;

int setBit( int n , int pos)
{
    return (n | (1 << pos)) ;
}

int main()
{
    cout << setBit( 5 , 1 ) << endl ;
}
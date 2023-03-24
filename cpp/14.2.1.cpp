//  write a program to check if a given number is power of 2

/*

Count set bits
n & (n - 1) sets the first set-bit to zero.
Explanation: n = XXX100
n - 1 = XXX011
n & ( n - 1 ) = XXX000

in order to make n - 1 from n we need to take the rightmost 1 in the binary and flip all the numbers right to it including the one

*/

/*

Power of two
From our past knowledge of the binary number system,
Numbers of the type 2

n have only 1 set bit.

Explanation: n = 000100
n - 1 = 000011
n & ( n - 1 ) = 000000
!( n & ( n - 1 ) ) = 000001
If the number only had one set bit, then n & ( n - 1 ) would be zero.


*/

#include<iostream>
using namespace std;

bool ispowerof2( int n )
{
    return ( n && !(n & ( n-1 ) ) );
}

int main()
{
    int n ;
     cout << " enter the number which is to be checked : " ;
     cin >> n ;

     if ( ispowerof2( n ) )
     cout << " a power of 2 " << endl ;

     else
     cout << " not a power of 2 " << endl ;
}
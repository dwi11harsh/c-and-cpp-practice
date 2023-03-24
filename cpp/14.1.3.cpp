// CLEAR BIT - clearing a particular position i.e., putting zero in any given place

#include<iostream>
using namespace std;

int clearBit( int n , int pos)
{
    int mask = ~(1<<pos);

    return n & mask;

}

int main()
{
    cout <<clearBit( 5 , 2 ) << endl ;
}
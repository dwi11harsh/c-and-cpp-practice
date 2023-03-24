// keep takin input until 0 is hit 
// do while loop

#include<iostream>
using namespace std;

int main()
{
    int a = 0 ;  // even though we start from zero yet the loop is executed
    do
    {
        cin >> a;
    }
    while( a != 0 );

    return 0;
}
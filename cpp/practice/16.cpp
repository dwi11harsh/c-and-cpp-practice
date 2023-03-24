//use of break statement
// check whether a given number is prime of not

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    bool flag = true;
    cin >> a;

    for ( int i = 2 ; i <= sqrt(a) ; i ++ )
    {
        if( a % i == 0)
        {
            cout << "NOT A PRIME" << endl ;
            flag = false;
            break;
        }
    }

    if(flag)
    cout << "PRIME" << endl;

    return 0 ;
}
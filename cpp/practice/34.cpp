// reverse a given number

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int rev = 0 ;

    while ( a > 0 )
    {
        int ans;
        ans = a%10;

        rev = rev * 10 + ans ;

        a /= 10 ;
    }

    cout << rev << endl ;

    return 0 ;
}
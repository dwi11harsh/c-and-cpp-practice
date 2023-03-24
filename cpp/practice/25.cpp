/* inverted pattern

12345
1234
123
12
1

*/

// keep the >< sign in check

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for ( int i = 0 ; i <= a ; i ++ )           // had to start from zero coz - i don't know - NEED TO KNOW THE REASON
    {
        cout << endl;
        for ( int j = 1 ; j <= a - i ; j ++ )
        {
            cout << " " << j << " " ;
        }
        cout << endl ;
    }
}
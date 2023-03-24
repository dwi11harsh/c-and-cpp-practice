// pattern - hollow rectangle

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for ( int i = 1 ; i <= a ; i ++ )
    {
        for ( int j = 1 ; j <= a ; j ++ )
        {
            if ( j == 1 || i == 1 || j == a || i == a )
            {
                cout << " * ";
            }

            else 
             cout << "   ";
        }
        cout << endl ;
    }

    return 0 ;
}
#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b;
    int arr [ a ][ b ] ;
    for ( int i = 0 ; i < a ; i ++ )
    {
        for ( int j = 0 ; j < b ; j ++ )
        cin >> arr [ i ][j ];
    }

    int key ;
    bool falg = true ;
    cin >> key ;

    for ( int i = 0 ; i < a ; i ++ )
    {
        for ( int j = 0 ; j < b ; j ++ )
        {
            if ( key == arr [ i ][ j ] )
            {
                cout << "found in " << i << "   " << j << endl ;
                falg = false ;
            }
        }
    }

    if ( falg )
    cout << "element not found" << endl ;
}
#include<iostream>
using namespace std;

int main()
{
    int  size ;
    cin >> size ;

    int arr [ size ] ;

    for ( int i = 0 ; i < size ; i ++ )
    {
        cin >> arr [ i ] ;
    }

    int cur = 0 ;

    for ( int i = 0 ; i < size ; i ++ )
    {
        cur = 0 ;

        for ( int j = 0 ; j < size ; j ++ )
        {
            cur += arr [ j ] ;
            cout << cur << "   " ;
        }
    }
}
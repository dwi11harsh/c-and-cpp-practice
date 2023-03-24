// floyd's triangle

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int flag = 1 ;

    for ( int i = 1 ; i <= a ; i ++ )
    {
        cout << endl ;
        for ( int j = 1 ; j <= i ; j ++ )
        {
            cout << " " << flag << " " ;
            flag ++ ;
        }

        cout << endl ;
    }

    return 0 ;
}
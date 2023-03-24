// fibonacci sequence

#include<iostream>
using namespace std;

void fibonacci( int a )
{
    int t1 = 0 ;
    int t2 = 1 ;
    for ( int i = 1 ; i <= a ; i ++ )
    {
        if( t1 + t2 == 1)
           cout << "1  ";
        cout << t1 + t2 << "  ";

        int temp = t1 + t2 ;
        t1 = t2 ;
        t2 = temp ;

    }
}

int main()
{
    int a;
    cin >> a ;

    fibonacci ( a );

    return 0 ;
}
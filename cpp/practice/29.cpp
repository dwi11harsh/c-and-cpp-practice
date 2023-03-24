/* following pattern

1 

0  1 

1  0  1 

0  1  0  1 

1  0  1  0  1 

 */

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for ( int i = 1 ; i <=a ; i ++ )
    {
        cout << endl ;


        for ( int j = 1 ; j < i ; j ++ )
        {
            if ( (i+j) % 2 == 0 )
              cout << "0  ";

            else
              cout << "1  ";
        }

        cout << endl ;


    }
}
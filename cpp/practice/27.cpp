/* rhombus pattern

    *****
   *****
  *****
 *****
*****


*/
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for ( int i = 1 ; i <= a ; i ++ )
    {
        cout << endl ;


        for  ( int j = 1 ; j <= a-i ; j ++ )
           cout << "   ";
        
        for ( int j = 1 ; j <= a ; j ++ )
            cout << " * ";


        cout << endl ;
    }

    return 0 ;
}
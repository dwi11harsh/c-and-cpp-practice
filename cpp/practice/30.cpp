/* following pattern

         1  

       1   2  

     1   2   3  

   1   2   3   4  

 1   2   3   4   5  

 */

#include<iostream>
using namespace std;

int main()
{
    int a ;
    cin >> a ;

    for ( int i = 0 ; i <= a ; i ++ )
    {
        cout << endl ;


        for ( int j = 1 ; j <= a-i ; j ++ )
           cout << "  ";

        for ( int j = 1 ; j <= i ; j ++ )
           cout <<" " << j << "  ";

        
       cout << endl ;     
        
    }
}
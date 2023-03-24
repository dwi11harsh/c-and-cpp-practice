// butterfly pattern
/*

*      *    this line has 1 star at the start and at the end of the spaces and has 6 spaces  
**    **    this line has 2 star at the start and at the end of the spaces and has 4 spaces 
***  ***    this line has 3 star at the start and at the end of the spaces and has 2 spaces 
********    this line has 4 star                                                            
********    from here the pattern is reversed
***  ***
**    **
*      *

*/


#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

   for ( int i = 1 ; i <= a ; i ++ )
   {
       for ( int j = 1 ; j <= i ; j ++ )
       {
           cout << " * " ;
       }

       for ( int j = 1 ; j <= 2 * ( a - i ) ; j ++ )
       {
           cout << "   ";
       }

       for ( int j = 1 ; j <= i ; j ++ )
       {
           cout << " * " ;
       }

       cout << endl ;


   }


   for ( int i = a ; i > 0 ; i -- )
   {
       for ( int j = 1 ; j <= i ; j ++ )
       {
           cout << " * " ;
       }

       for ( int j = 1 ; j <= 2 * ( a - i ) ; j ++ )
       {
           cout << "   ";
       }

       for ( int j = 1 ; j <= i ; j ++ )
       {
           cout << " * " ;
       }

       cout << endl ;


   }



    cout << endl ;
}
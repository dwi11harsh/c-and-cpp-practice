#include<iostream>
using namespace std;

                     void increment ( int *a )
                     {
                         *a = *a + 1 ;       // dunno why but *a++ is not workin, hac to use      *a = *a + 1 ;   
                     }



int main()
{
    int a = 5 ;

    increment ( &a );

    cout << a << endl ;

}
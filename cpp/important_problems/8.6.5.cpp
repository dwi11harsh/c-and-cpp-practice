// pairsum problem
// brute force aproach
// finding a pair whose sum is equal to kd

#include<iostream>
#include<climits>
using namespace std; 

bool pairsum( int arr[] , int n , int k )
{
     
     for ( int i = 0 ; i < n ; i++ )
     {
         for ( int j = 0 ; j < n ; j++ )
         {
             if ( arr [ i ] + arr [ j ] == k ){
             cout << " indices are " << i << "  " << j << endl;
             return true;
             }
         }
     }

     return false;
}

int main()
{
    int arr[] = { 2, 4, 7, 11, 14, 16, 20, 21 };
    int k = 31;
    cout << pairsum( arr , 8 , k ) << endl;
}
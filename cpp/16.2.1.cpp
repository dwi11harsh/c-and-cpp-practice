// check if an array is sorted or not 
#include<iostream>
using namespace std;

bool check( int a[], int n )
{
    if( n == 1 )
      return true;

    bool restArray = check ( a + 1 , n - 1 ) ;     ///  a + 1 will shift the pointer from current element to the next element and n - 1 will decrease the size of the array accordingly
    

    return ( a[0] < a[1] && restArray ) ;
}



int main()
{
    int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 } ;

    cout << check ( arr , 7 ) ;

    return 0 ;
}
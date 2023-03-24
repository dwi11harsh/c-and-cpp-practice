// // pairsum problem
// optimised approach with a sorted array
// finding a pair whose sum is equal to kd


#include<iostream>
#include<climits>
using namespace std;

bool pairsum( int arr[] , int n, int k )
{

    int low = 0;
    int hi = n-1;

    for ( int i = 0 ; i < n ; i++ )
    {
        int sum = arr[low] + arr[hi] ;

        if ( sum == k)
        {
            cout << " indices are : " << low << "  " << hi << endl;
            return true;
        }
        else if ( sum > k)
        {
            hi -= 1;
        }
        else if ( sum < k )
        {
            low += 1;
        }
        else if ( low == hi )
        {
            return 0;
        }
        
    }

    return 0;

}

int main()
{
    int arr[] = { 2, 4, 7, 11, 14, 16, 20, 21 };
    int k = 31;
    cout << pairsum( arr , 8 , k ) << endl;
}
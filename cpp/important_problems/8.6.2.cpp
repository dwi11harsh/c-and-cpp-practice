// find maximum subarray sum

// cumulative sum approach

#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cout << " enter the array size : ";
    cin >> n;
    int arr[  n ];

    cout << " enter the array element : " << endl;
    for( int i = 0 ; i < n ; i++ )   // initialising the array;
    {
        cin >> arr[ i ];
    }

    int currsum[ n + 1];       // intialising other array in which we are about to store the cumulative sums;
    currsum[ 0 ] = 0;         // first element is marked 0 so that when we check it later the sum starts from 0 and not any other value;
    
    for ( int i = 1 ; i <= n ; i++ )   // storing the cumulative sum in this array of arr[n];
    {
        currsum[ i ] = currsum [ i - 1 ] + arr[ i - 1 ];
        
    }

    int maxsum = INT_MIN;       // initialising an int in which we are about to store the maximum sum of the array

    for ( int i = 0 ; i <= n ; i++ )
    {
        int sum = 0 ;
        for ( int j = 0 ; j < i ; j++ )
        {
            sum = currsum [ i ] - currsum [ j ];
            maxsum = max( sum , maxsum );
        }
    }

    cout << maxsum << endl;
    return 0;
}
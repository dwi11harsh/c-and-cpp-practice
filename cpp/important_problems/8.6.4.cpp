// circular subarray sum problem

#include<iostream>
#include<climits>
using namespace std;

int kadane ( int arr[] , int size )    // finding maximum subarray sum using kadane's algorithm
{
    int currsum = 0 ;
    int maxsum = INT_MIN;

    for ( int i = 0 ; i < size ; i++ )
    {
        currsum += arr[ i ];
        if ( currsum < 0)
        {
            currsum = 0 ;
        }

        maxsum = max( currsum , maxsum );
    }

      return maxsum;

}

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

    int totalsum = 0 ;
     
     int nonwrapsum = kadane ( arr , n );
     
      for ( int i = 0 ; i < n ; i++ )
      {
          totalsum += arr [ i ];
          arr[ i ] = -arr [ i ];
      }

      int wrapsum = totalsum + kadane( arr , n );

      cout << max(wrapsum , nonwrapsum ) << endl;

      return 0 ;
}
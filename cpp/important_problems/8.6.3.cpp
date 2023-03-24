// maximum subarray sum
/*

 Kadane’s Algorithm:
Idea: Start taking the sum of the array, as soon as it gets negative, discard
the current subarray, and start a new sum.
Time Complexity: O(N)
Space Complexity: O(1) 

*/

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
      int maxsum = INT_MIN;
      int currentsum=0;
      
      for ( int i = 0 ; i < n ; i++ )
      {
          currentsum+=arr[ i ];
           
            if ( currentsum < 0 )
            {
                currentsum = 0 ;
            }

            maxsum = max ( maxsum , currentsum );
      }

      cout << maxsum << endl ; 
      return 0 ;
      
}
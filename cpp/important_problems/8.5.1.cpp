/*

Arrays Challenge-First Repeating Element

(Amazon, Oracle)

Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 10^6
0 <= Ai <= 10^6
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.

*/

#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a [ n ];

    cout << " enter the array elements : " << endl;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[ i ];
    }
/*                                          // this could not be applied as it takes more time than what is alloted to us
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = i + 1 ; j < n ; j++ )
        {
            if ( a [ i ] == a [ j ])
            {
                cout << a [ i ] << endl;
                break;
            }
        }
    }

*/


    const int N = 1e6+2;    // const used as N could not be changed later and 1e6 means 10^6;
    int idx[N];
    for ( int i = 0 ; i < N ; i++ )
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for ( int i = 0 ; i < n; i++ )
    {
        if ( idx[a[i]] != -1 )
        {
            minidx = min(minidx , idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if ( minidx == INT_MAX ){
    cout<< "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
}
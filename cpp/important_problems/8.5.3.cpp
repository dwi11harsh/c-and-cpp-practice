/*

Problem
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2
Intuition
If in O(1), we can tell if an element is present in an array, then our task will be
simpler.
For that, we will maintain a Check[ ] array, that will if an element x is present in
the array or not.
It will be of boolean type as we only need to check the presence or absence of the
number.

Steps to Solve:
1. Build the Check[ ] array initialized with False at all indices.
2. By iterating over the array and marking non-negative a[i] as true i.e.

if(a[i] >= 0)
check[a[i]] = True

3. Iterate in the Check[ ] from i=1, BREAK the loop when you find check[i] =
False and store that i in the ans variable.
4. Output the ans.

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

    const int N = 1e6 + 2;
    bool check[ N ];

    for ( int i = 0 ; i < N ; i ++ )   // assigning all the elemnts '0'
    {
        check [ i ] = 0;
    }
    for ( int i = 0 ; i < n ; i++)   // marking '1' on the index of check wherever we get a positive integer
    {
        if ( a[i] >= 0)
        {
            check[ a [ i ] ] = 1;
        }
    }
    int ans = -1;
    for ( int i = 1 ; i < N ; i++ )    // checking for the smallest missing positive integer in the index of check
    {
        if (check[ i ] == 0)
        {
            ans = 1; 
            cout << i << endl;
            break;
        }
    }
    if ( ans == -1)                    // if we were not able to find any answer then this will print negative
    {
        cout << ans << endl;
    }
}
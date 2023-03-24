/*

Arrays Challenge-Subarray with given sum
(Google, Amazon, Facebook, Visa)

Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 10^5
0 <= Ai <= 10^10
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.

Solution
Brute Force Solution
● Find sum of all possible subarrays. If any of the sum equates to S, output
the starting and ending index of the subarray.
Time Complexity : O(n2
)

Optimized Approach
Steps:
1. Keep the pointers st and en, and a variable currSum that stores the sum
from st to en.
2. initialize st = 0, en = 0
3. Increment en till currSum + a[en + 1] > S
4. When 3rd condition occurs, start increasing st until currSum <= S.

5. Whenever the condition (currSum = S) is satisfied, store st and en and
BREAK from the loop.

Time Complexity: O(n)

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
    int s;
    cout << " enter the value of s : ";
    cin >> s ;

    int st = 0;
    int en = 0;
    int sum = a[st];

    while(sum <= s)
    {
        sum += a[en];
        en += 1;
    }

    if(sum==s)
    cout << st << en << endl;
    else
    {
        while( sum > s)
        {
            sum -= a[st] ;
            st += 1;
        }

        cout << st << en << endl;
    }

    
}
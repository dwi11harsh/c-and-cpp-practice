// google kickstart
/*

PROBLEM: an arithmetic array is an array that contains at least two integers and the difference between consecutive integers
are equal. 

Saraswati has an array of N  non-negative integers. The i-th integer of the array is A(i). She wants to choose a contigous
arithmetic subarray from her array that has the maximum length. Please help her to determine the length of 
the longest contigous arithmetic subarray.

INPUT: 
the first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing
the integer N . the second line contains N integers. The i-th integer in A(i).

OUTPUT:
for each test case, output one line containing Case#x:y, where x is the test case number
(starting from 1) and y is the leangth of the longest contigous arithmetic subarray

CONSTRAINTS: 

Time limot: 20 seconds per test set.      |  SOLUTION:
Memory limit 1 GB.                        |            1sec=10^8 operations (approx)
1<=T<=100                                 |            20sec=2*10^9 operations (approx)
O<=A(i)<=pow(10,9)                        |          AB TIME COMPLEXITY USPE LGAO JISPE LOOP LGANA HO => IS CASE ME LOOP N PE LGNE WALA HAI
                                          | 
Test Set 1                                | APPROACH:
                                          | * LOOP OVER THE ARRAY AND FIND THE ANSWER
2<=N<=2000.                               | * MAINTAIN THE FOLLOWING VARIABLES
                                          | (i) PREVIOUS COMMON DIFFERENCE (pd)
Test Set 2                                | (j) CURRENT ARITHMETIC SUBARRAY LENGTH (cur)
                                          | (k) MAX ARITHMETIC SUBARRAY LENGTH (ans)
2<=N<=2*10^5 for at most 10 test cases.   |
                                          |
For the remaining cases, 2<=N<=2000       |

2 CASES

1.
PD == A[i] - A[i-1]
* current answer increased by 1
* ans = max(ans,curr)

*/


#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int array[n];
    
    cout << " enter the elements : " << endl;

    for(int i = 0; i < n ; i++)            // taking input
    {
        cin>>array[i];
    }

    int ans = 2;
    int pd = array[ 1 ] - array [ 0 ] ;
    int j = 2 ;
    int curr = 2 ;

    while ( j > n)
    {
        if(pd == array [ j ] - array [ j -1 ] )
        { 
            curr ++;
        }
        else
        {
            pd = array [ j ] - array [ j - 1 ];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout << ans << endl; 
}
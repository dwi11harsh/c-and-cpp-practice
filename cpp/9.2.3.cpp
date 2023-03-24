/*  ONE OF THE MOST IMPORTANT PROBLEM

Challenge 3 - 2D matrix Search
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000

NOTE - THE GIVEN MATRIX IS A SORTED MATRIX

*/

#include<iostream>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m;

    int a[n][m];

    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j ++ )
        cin >> a[i][j] ;
    }

    int target;
    cin >>  target;

    int r = 0 ; 
    int c = m - 1 ;

    bool flag = false;

    while ( r <= n || c >= 0)
    {
        if ( a[r][c] == target )
        {
            flag = true;
            break;
        }
        else if ( a[r][c] > target )
        {
            c -- ;
        }
        else
        {
            r ++ ;
        }
    }

    if ( flag )
    cout << " ELEMENT FOUND " << endl;
    else
    cout << " ELEMENT NOT FOUND " << endl;
}
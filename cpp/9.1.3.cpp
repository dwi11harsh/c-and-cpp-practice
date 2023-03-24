// spiral order matrix traversal

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout << " enter the no of rows and columns : ";
    cin >> n >> m;
    int a[n][m];
    
    cout << " enter the array elements : " << endl;
    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            cin >> a[i][j];
        }
    }
// these variables are here to help us set boundaries for each iterations 
    int rowstart = 0 ;
    int rowend = n - 1 ;
    int columnstart = 0 ;
    int columnend = m - 1 ;

    while ( rowstart <= rowend && columnstart <= columnend )  // as soon as ( rowstart == rowend || columnend == columnstart )
    // it means we have reached at the centre of the loop and we need to stop printing the values
    {
        // for row start
        for ( int col = 0 ; col <= columnend ; col++)
        {
            cout << a[rowstart][col] << "  ";
        }
        rowstart ++ ;

        // for column end
        for ( int row = 0 ; row <= columnend ; row ++ )
        {
            cout << a[row][columnend] << "  ";
        }
        columnend -- ;

        // for rowend
        for ( int col = columnend; col >= columnstart ; col -- )
        {
            cout << a[rowend][col] << "  ";
        }
        rowend -- ;

        // for columnstart
        for ( int row = rowend ; row >=rowstart ; row-- )
        {
            cout << a[row][columnstart] << "  ";
        }
        columnstart ++ ;

    }

    return 0 ;

}
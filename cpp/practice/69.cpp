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

    int rowstart = 0 ; 
    int columnstart = 0 ;
    int rowend = n ;
    int columnend = m ;
    

    while ( rowstart < rowend  && columnstart < columnend )
    {
        for ( int i = columnstart ; i < columnend ; i ++ )
            cout << a [ rowstart ] [ i ] ;

        columnend -- ;

        for ( int i = rowstart ; i < rowend; i ++ )
            cout << a [ i ] [ columnend ] ;

        rowend -- ;

        for ( int i = columnend ; i > columnstart ; i ++ )
            cout << 
    }
    return 0 ;

}
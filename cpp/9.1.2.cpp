// finding an element in 2d

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

    cout << "enter the key : ";
    int x;
    cin >> x ;
    bool flag = 0;
    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            if ( a[i][j]==x)
            cout << " Element Found in " << i << "x" << j << endl;
            flag = 1;
        }
        cout << endl;
    }
    
    if(flag)
    cout << " Element not found " << endl;
}
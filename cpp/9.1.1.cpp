// 2d array
// declaration and definition

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout << " enter the no of rows and columns : ";
    cin >> n >> m;
    int a[n][m];
    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            cin >> a[i][j];
        }
    }
    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
}
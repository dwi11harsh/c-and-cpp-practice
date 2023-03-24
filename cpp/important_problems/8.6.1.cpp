/*

SUBARRAY - a subarray is a CONTIGUOUS part of an array
a[4]={-1, 4, 7, 2 }
b[3]={4, 7, 2 }
c[3]={-1, 7, 2}
b[] is a subarray of a[] but c[] is not

*/

// print all the subarrays of the given arrray

#include<iostream>

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

    int counter = 0;
    
    
    
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0; j< n ; j++ )
            {
                for ( int k = i; k <= j ; k++ )
                {
                    cout << a [ k ] << " ";
                }
                cout << endl;
            }
        }

            
    
}
// sum of all the subarrays

#include<iostream>

using namespace std; 

void printArray ( int array[] , int size )
{
    for (int i = 0 ; i < size ; i++ )
    {
        cout<< array[ i ] << "  ";
    }
}

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;

    int array[size];
    
    cout << " enter the elements : " << endl;

    for(int i = 0; i < size ; i++)            // taking input
    {
        cin>>array[i];
    }

    int cur = 0 ;

    for ( int i = 0 ; i < size ; i++ )
    {
        cur = 0;
        for ( int j = i ; j < size ; j++ )
        {
            cur += array[ j ] ;
            cout << cur << endl ;
        }
    }
}
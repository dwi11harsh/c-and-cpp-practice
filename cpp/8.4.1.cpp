// dry run - running an algorithm without writing the actual code;

// max of i

#include<iostream>
#include<climits>
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

    int mx  = array [ 0 ];

    int counter = 0;

    while(counter < size)
    {
        mx = max( array[ counter ] , mx );
        cout << mx << "  " ;
        
        counter ++ ;
    }
}
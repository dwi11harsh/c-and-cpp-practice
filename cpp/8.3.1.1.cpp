// sorting of an array 

// selection sort - find the minimum element in unsorted array and swap it with element at begining

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

    for(int i = 0; i < size ; i++)      // array input
    {
        cout<< " enter the element "<<(i+1)<<" : ";
        cin>>array[i];
    }

    for ( int i = 0; i < size ; i++)   // selection sorting
    {

        

        for ( int j = i + 1 ; j < size ; j++ )
        {

            if ( array[ j ] < array [ i ])
            {
                int min = array[ i ];
                array[ i ] = array [ j ];
                array[ j ] = min;
            }

        }

    }
    printArray( array , size );
}
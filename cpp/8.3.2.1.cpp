// BUBBLE SORT - repetedly swap two adjacent elements if they are in wrong order

// if we have "n" elements than we have to execute the sorting "n-1" times to get our sorted array

// for ith iteration of sorting loop we go upto n-ith element for iteration

// this method brings out the maximum valued element like a bubble comes out of the water

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

    int size = INT_MIN ;
    cout << " enter the size of the array : ";
    cin >> size ;
    int array[size];

    cout << " enter the array elements : " << endl;
    for( int i = 0; i < size ; i++)                 // taking input
    {
        cin>>array[i];

    }

    int counter = 0; 
    while ( counter < size)
    {
        for ( int i = 0 ; i < size-counter; i++ )   // for ith iteration of sorting loop we go upto n-ith element for iteration
        {
            if ( array [ i ] > array [ i + 1])
            {
                int temp = array [ i ];
                array [ i ] = array[ i + 1];
                array [ i + 1 ] = temp;
            }
        }
        counter++;
    }

    printArray( array , size);


}


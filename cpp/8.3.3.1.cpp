// INSERTION SORT - Insert an element from unsorted array to its correct position in sorted array


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

    for ( int i = 1 ; i < size ; i++ )
    {
        int j = i-1 ;
        int temp = array[ i ] ;

        while ( j >= 0 && temp < array [ j ] )    // just change the sign in 'temp < array [ j ]' and the array will be sorted in the opposite direction
        {
            array [ j + 1 ] = array [ j ];
            j--;
        }
        array [ j + 1 ] = temp;       // because at the end of the loop the j has gone 1 behind where it has to stay so we bring back j to its orignal location where it should be
    }
    printArray( array , size);


}
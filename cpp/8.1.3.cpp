// checking the greatest and the smallest number in an array

// INT_MIN is the minimum value of int that can be assigned to any variable

// similarly INT_MAX is the highest value that can be assigned to any integer 

// these are included in the climits header file

// we have also used functions called max() and min() in this program

#include<iostream>
#include<climits>        // including this to use INT_MAX & INT_MIN  

using namespace std;

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;

    int array[size];

    for(int i = 0; i < size ; i++)     // taking input
    {
        cout<< " enter the element "<<(i+1)<<" : ";
        cin>>array[i];
    }
    
    int maxno = INT_MIN, minno = INT_MAX ;

    for( int i = 0 ; i < size ; i++ )    // checking greatest number in the array
    {

        if ( i == 0)
        {
            maxno = max( maxno, array[ i ] );        // this function will check both the values and return the maximum value
            minno = min( minno , array[ i ] );       // this function will check both the values and return the minimum value
        }


        if( array [ i ] > maxno )
        {
            maxno = array [ i ];
        }

        if ( array [ i ] < minno )
        minno = array [ i ] ;

    }

    cout<<" the greatest number is : " << maxno << endl;   // giving output

    cout << " the smallest number is : " << minno << endl;

}
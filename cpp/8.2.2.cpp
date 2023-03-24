// searching a key in array using binary search method

#include<iostream>

using namespace std;

int BinarySearch( int array[] , int size , int key)
{
    int s = 0 , e = size ;
    while(s<=e)
    {
        int mid = (  s + e )/2;

        if ( array [mid] == key)
        return mid;

        else if ( array [ mid ] > key )
        e = mid-1;

        else if ( array [ mid ] < key )
        s = mid+1;

    }

    return -1;
}

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;

    int array[size];

    for(int i = 0; i < size ; i++)
    {
        cout<< " enter the element "<<(i+1)<<" : ";
        cin>>array[i];
    }
    cout<<"enter the key: ";

    int key;
    cin >> key;

    cout << BinarySearch( array , size , key) << endl;      // in order to send an array this is the syntax which should be used

    
}
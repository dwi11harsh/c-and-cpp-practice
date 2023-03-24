#include<iostream>

using namespace std;

int linearsearch( int array[] , int size , int key)
{
    for(int i = 0; i < size ; i++)
    {
        if ( key == array [ i ])
        return i;
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

    cout << linearsearch( array , size , key) << endl;      // in order to send an array this is the syntax which should be used

    
}
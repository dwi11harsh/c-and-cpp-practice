// if we want to take all the inputs from the user

#include<iostream>

using namespace std;

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

    for(int i = 0; i < size ; i++)
    {
        cout<< " element "<<(i+1)<<" is : "<<array[i]<<endl;
        
    }
}
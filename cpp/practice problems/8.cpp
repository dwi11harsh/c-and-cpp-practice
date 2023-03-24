
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the values of a: ";
    cin>>a;

    for(int i=1; i<=a; i++)       // for changing rows
    {
        cout<<endl;
        for(int j=1; j<=a-i; j++)  // for spaces 
        {
            cout<<"   ";
        }
        for(int j=1; j<=2*i-1; j++)    // for printing stars
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=a; i>=a; i--)       // for changing rows
    {
        cout<<endl;
        for(int j=1; j<=a-i; j++)  // for spaces 
        {
            cout<<"   ";
        }
        for(int j=1; j<=2*i-1; j++)    // for printing stars
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
    cout<<endl;

}
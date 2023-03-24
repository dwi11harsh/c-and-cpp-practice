// trinagle with its base on left side
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the number of lines: ";
    cin>>a;
    

    for(int i=1; i<=a; i++)
    {
        cout<<"\n";
        
        for(int j=1; j<=i; j++)
        {
            cout<<" * ";
        }
    }
    for(int i=a; i>=0; i--)
    {
        cout<<"\n";
        
        for(int j=i; j>=0; j--)
        {
            cout<<" * ";
        }
    }
}
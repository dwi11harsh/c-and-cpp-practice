/* rhombus pattern */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<endl;
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"   ";
        }
        for(int j=1; j<=n; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
/*
0-1 pattern

1
01
101
0101
10101 

*/

#include<iostream>
using namespace std;

int main()
{
    int a,n=1;
    cout<<"enter the number of rows: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            ++n;
            
        }
        cout<<endl;
    }
}
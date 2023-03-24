// print all prime numbers from a to b


#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j;
    cout<<"enter the starting and the ending numbers"<<endl;
    cin>>a>>b;
    for( i=a; i<=b; i++)
    {
        for( j=2; j<=i; j++)
        {
            if(i%j==0)
            {
                
                break;
            }
            
        }
        if(i==j)
        cout<<i<<endl;
    }

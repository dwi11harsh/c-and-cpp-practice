// factorial of a given value of n:

#include<iostream>
using namespace std;

void fact(int n)
{
    int res=1;
    for(int i=1; i<=n; i++)
    {
        res=res*i;
    }
    cout<<"fact"<<n<<"="<<res<<endl;
}

int main()
{
    int a;
    cout<<"enter the value of n: ";
    cin>>a;
    fact(a);
    
}
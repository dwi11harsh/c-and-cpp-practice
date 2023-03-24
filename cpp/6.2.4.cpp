// finding nCr where res=fact(n)/(fact(r)*fact(n-r));
#include<iostream>
using namespace std;
int fact(int n)
{
    int res=1;
    for(int i=1; i<=n; i++)
    {
        res=res*i;
    }
    return res;
}

int main()
{
    int n,r,res;
    cout<<"enter the values of n and r: ";
    cin>>n>>r;
    res=fact(n)/(fact(r)*fact(n-r));
    cout<<"required result = "<<res<<endl;
}
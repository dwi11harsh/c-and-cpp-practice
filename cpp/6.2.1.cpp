#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a)
{
    for(int i=1; i<sqrt(a); i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}

int main()
{
    int a,b;
    cout<<"enter the two digits: ";
    cin>>a>>b;

    for(int i=a; i<=b; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }
}
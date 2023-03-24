// check if a is prime

#include<iostream>
using namespace std;

int main()
{
    int a,i;
    cout<<"enter the value of a: ";
    cin>>a;
    
    for( i=2; i<a; i++)
    {
        if(a%i==0)
        {
            cout<<a<<" is non prime."<<endl;
            break;
        }
        
    }
    if(i==a)                        // all iterations are completed
        {
            cout<<a<<" is a prime."<<endl;
        }
}
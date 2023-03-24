// check if entered number is prime

#include<iostream>
#include<cmath>              // include cmath in order to use sqrt
using namespace std;

int main()
{

    int n;
    cout<<"enter the number: ";
    cin>>n;

    bool flag=0;                // used a boolean

    for(int i=2; i<=sqrt(n); i++)            // here we have used sqrt
    {
        if(n%i==0)
        {
            cout<<"not a prime";
            flag=1;                // boolean value is altered if entered number is a prime
            break;
        }
        
    }
    if(flag==0)                 // if the altered value matches here the enterd number is declared as a prime
    {
        cout<<"prime";
    }


    
} 
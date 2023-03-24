// program to find sum of first n natural numbers

#include<iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cout<<"enter the number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        sum+=i;

    }
    cout<<"required sum is "<<sum<<endl;
}
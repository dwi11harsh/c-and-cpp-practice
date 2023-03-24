// sum of first n natural numbers using functions

#include<iostream>
using namespace std;

void sum(int n)
{
    int res=n*(n+1)/2;
    cout<<"required result is: "<<res<<endl;
}

int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    sum(a);
}
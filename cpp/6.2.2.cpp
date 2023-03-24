// fibenacci sequence using functions


#include<iostream>
using namespace std;

void fib(int a)
{
    int t1=0;
    int t2=1;
    int next;
    for(int i=1; i<=a; i++)
    {
        cout<<"->"<<t1;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}

int main()
{
    int n;
    cout<<"enter the number of terms to be printed: ";
    cin>>n;
    fib(n);
}
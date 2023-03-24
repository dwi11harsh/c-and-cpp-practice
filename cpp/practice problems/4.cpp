// sum of first n odd numbers

#include<iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cout<<"enter the value of n:";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        if(i%2==0)
        continue;
        else
        sum+=i;
    }
    cout<<"required sum is "<<sum<<endl;
}
// print prime numbers between a and b

#include<iostream>
using namespace std;

int main()
{
    int a,b,j;
    cout<<"enter the intervals: ";
    cin>>a>>b;

    for(int i=a; i<=b; i++)  // runs from a to b
    {
        for(j=2;j<i;j++)   // checks prime or not
        {
            if(i%j==0)
            {
                continue;
            }
        }
        if(i==j)          // prints if prime
        {
            cout<<" "<<i<<" ";
        }
    }
}

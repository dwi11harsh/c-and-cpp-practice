#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,num;
    cout<<"enter a number";
    cin>> num;
    for(i=1;i<=num;i++)
    {
    fact=fact*i;
    }
    cout<<"factorial is "<<num<<fact;
    return 0;

}

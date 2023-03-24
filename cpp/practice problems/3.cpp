// program to show the table of n upto a

#include<iostream>
using namespace std;

int main()
{
    int a,n;
    cout<<"enter the number of which the table is to be displayed: ";
    cin>>n;
    cout<<"enter the number upto which the table is to be displayed: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

}
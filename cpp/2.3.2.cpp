//num comparison using nested if else statements
#include<iostream>
using namespace std;


int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<c<<endl;
            cout<<"is greater"<<endl;
        }
        


    }
    
    else if(b>a)
    {
        if(b>c)
        {
            cout<<b;
            cout<<"is greater"<<endl;
        }
    }
    else
    {
        cout<<c<<endl;
       
    }
    return 0;

}
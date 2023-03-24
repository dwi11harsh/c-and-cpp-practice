// pyramid pattern
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the number of lines: ";
    cin>>a;

    b=2*a;

    for(int i=1; i<=a; i++)
    {
        
        cout<<"\n";                 //for changing the line


        for(int j=b; j>=0; j--)     //for spaces in each line
        {
            cout<<" ";
        }


        for(int k=1; k<=i; k++)     //for printing stars
        {
            cout<<"  *  ";
        }

        b=b-2;                        //decrement for space


    }

    
}
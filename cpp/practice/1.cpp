/* making the pattern where 
number of rows = number of columns */


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        cout<<"\n";
        for(int j=1; j<=a; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
  
    }
    return 0;

}

// if i put endl it will shift the control to the next line and this does not help in pattern programming //
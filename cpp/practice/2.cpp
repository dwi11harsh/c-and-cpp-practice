// printing the following pattern upto the number of entered lines
// * 
// * *
// * * *


#include<iostream>
using namespace std;

int main()
{


    int a;
    cout<<"enter the number of lines upto which the patter is to be created: ";
    cin>>a;


    for(int i=1; i<=a; i++)
    {
        cout<<"\n";

        for(int j=1; j<=i; j++)
        {
            cout<<" * ";
        }
    }


    return 0;

}


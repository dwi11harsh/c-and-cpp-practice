// half pyramid after 180 degree rotation
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    
    for(int i=1; i<=n; ++i)
    {
        for(int j=n-i; j>=0; --j)  // this loop is for number of spaces and it says : number of spaces = n-(the row number)
        {
            cout<<"   ";           // we put number of spaces = number of character(include spaces if character has them)
        }
        for(int k=1; k<=i; k++)
        {
            cout<<" * ";            // here the number of characters = 3( 1 star + 2 spaces)
        }
        cout<<endl;
        
    }
}

// the first loop in pattern programming is for loops and most of the times it starts with i=1 and not 1=n
// this makes it much easier to operate
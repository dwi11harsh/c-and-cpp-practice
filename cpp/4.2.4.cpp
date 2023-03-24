/* following pattern

1  2  3  4  5 

 1  2  3  4 

 1  2  3 

 1  2 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    for(int i=n; i>0;i--)
    {
        cout<<endl;
        for(int j=1; j<=i; j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}
/* palindromic pattern

        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<endl;
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>0; j--)
        {
            cout<<j<<" ";
        }
        for(int j=2; j<=i; j++)
        {
            cout<<j<<" ";
        }
    }
}
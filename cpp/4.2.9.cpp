/* following pattern

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
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
        for(int j=1; j<=(n-i); j++ )
        {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<" *  ";
        }
        cout<<endl;
        
    }
    for(int i=n; i>0; i--)
    {
        cout<<endl;
        for(int j=1; j<=(n-i); j++ )
        {
            cout<<"  ";
        }
        for(int j=i; j>0; j--)
        {
            cout<<" *  ";
        }
        cout<<endl;
        
    }
}
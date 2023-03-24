/* rhombus pattern

    *****
   *****
  *****
 *****
*****


*/


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the number of rows: ";
    cin>>a;

    for(int i=a; i>=1; i--)
    {
        for(int j=(i-1);j>0; j--)
        {
            cout<<"   ";
        }
        for(int j=1; j<=a; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
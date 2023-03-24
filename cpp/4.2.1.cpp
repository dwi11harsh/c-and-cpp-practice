/* inverted pattern

12345
1234
123
12
1

*/

// keep the >< sign in check

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
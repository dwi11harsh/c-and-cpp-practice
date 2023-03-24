/* following pattern

         1  

       1   2  

     1   2   3  

   1   2   3   4  

 1   2   3   4   5  

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
            cout<<"  ";               //2 spaces
        }
        for(int j=1; j<=i; j++)
        {
            cout<<" "<<j<<"  ";    // single space followed by the counter followed by 2 spaces
        }
        cout<<endl;
    }
}
/* pascal triangle
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/
#include<iostream>
using namespace std;
int fact(int n)
{
    int res=1;
    for(int i=1; i<=n; i++)
    {
        res=res*i;
    }
    return res;
}

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++)                // starting from 1 does not form the same triangle... why???
    {
        for(int j=0; j<=i; j++)           // here we start from zero but we go upto <=i.. why so???
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}
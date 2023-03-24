//while loop
//keep taking number until user enters a -ve num


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>0)
    {
        cout<<n<<endl;
        cin>>n;
    }


    return 0;
}
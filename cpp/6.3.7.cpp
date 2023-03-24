// decimal to binary

#include<iostream>

using namespace std;

int reverse(int n)
{
    int reverse=0;              // assigning the zero value is important else the program will malfunction
    while(n>0)
    {
        int lastdigit = (n%10) ;
        reverse = reverse*10 + lastdigit;    // adding the new last digit while multiplying the previous reverse by 10
        n=n/10;                              // updating the counter                     
    }
    return reverse;
}

int DecToBin(int n)
{
    int ans=0, mod=0;
    while (n>0)
    {
        mod=n%2;
        ans=ans*10+mod;
        
        n/=2;

    }
    int rt = reverse(ans);  // the answer is not yet ready and we need to reverse it.
    return rt;
}

int main()
{
    cout<<"enter the decimal number: ";
    int n;
    cin>>n;
    cout<<DecToBin(n)<<endl;

}
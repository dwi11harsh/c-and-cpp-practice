// reverse the given number

#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter the number: ";
    cin>>n;

    int reverse=0;              // assigning the zero value is important else the program will malfunction
    while(n>0)
    {
        int lastdigit = (n%10) ;
        reverse = reverse*10 + lastdigit;    // adding the new last digit while multiplying the previous reverse by 10
        n=n/10;                              // updating the counter                     
    }
    cout<<reverse<<endl;

    
}
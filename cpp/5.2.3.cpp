/* check if the entered number is an armstrong number
1 5 3 = 1^3 + 5^3 + 3^3
*/

#include<iostream>
#include<math.h>       // in order  to use the power function
using namespace std;

int main()
{
    int n;
    cout<<"enter a digit: ";
    cin>>n;

    int sum=0;
    int original=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);    // this is how we use the power function    pow((number which is to be raised), power)
        n=n/10;
    }
    if(sum==original)
    cout<<original<<" is an armstrong number:"<<endl;
    else
    cout<<original<<" is not an armstrong number:"<<endl;
}
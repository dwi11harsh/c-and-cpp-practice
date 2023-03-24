// check whether entered digits are pythegorian triplet where first entered digit is the greatest

#include<iostream>
#include<cmath>
using namespace std;

bool check(int a, int b, int c)
{
    if(pow(a,2)==pow(b,2)+pow(c,2))
    return true;
    else
    return false;
}

int main()
{
    int a, b, c;
    cout<<"enter three digits: ";
    cin>>a>>b>>c;
    bool res = check(a,b,c);
    if(res)
    {
        cout<<"entered digits are pythegorian triplet: "<<endl;
    }
    else
    cout<<"entered digits are not pythegorian triplet: "<<endl;
}
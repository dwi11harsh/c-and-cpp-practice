// decimal to hexadecimal

#include<iostream>

using namespace std;


string DecToOct(int n)
{
    string ans = "";
    int lastdigit = 0;


    while (n>0)
    {
        lastdigit = n%16;

        if(lastdigit<10)
        ans = ans + to_string(lastdigit);    // this converts the integer to string character

        else
        {
            char c = 'A' + lastdigit -10;
            ans.push_back(c);               // still don't know what this does
        }
        
        n/=16;

    }
    
    return ans;
}

int main()
{
    cout<<"enter the decimal number: ";
    int n;
    cin>>n;
    cout<<"reversed answer is: "<<DecToOct(n)<<endl;

}
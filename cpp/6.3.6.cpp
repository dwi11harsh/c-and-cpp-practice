// hexadecimal to decimal

#include<iostream>
#include<string> // in order to use the string and other such functions we need to use this bits library
using namespace std;

int HexaToDeci(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();         // this will store the size of the string in s so that we can later use for the counter

    for (int i=s-1; i>=0;  i--)   // we start for s-1 due zero indexing in arrays; the last character is not n  but is n-1
    {
        if( n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x*(n[i]-'A' + 10);       // if n[i] = 'A' then n[i]-'A' becomes zero and +10 makes it 10 similar will happen with B C D etc.
        }
        x *= 16;

    }
    return ans;
}

int main()
{
    string n;
    cin>>n;

    cout<<HexaToDeci(n)<<endl;
}

/*
WE START FROM SIZE - 1 ,i.e. ones , AND NOT 0 COZ WE HAVE TO START FROM LAST CHARACTER AND NOT THE FIRST CHARACTER


SINCE THE COUNTER STARTS FROM A.SIZE() WE CANNOT USE THE POWER FUNCTION IN LINE 17 AND 21
AND WE USE ANOTHER VARIABLE AND WE KEEP INCREASING THIS VARIABLE IN THE MULTIPLE OF 16
*/
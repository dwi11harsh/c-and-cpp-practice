// add two binary numbers

#include<iostream>

using namespace std;

int addBinary( int , int);

int reverse ( int );

int main()
{
    int a, b, c;
    cout<<"enter two binary numbers: ";
    cin >> a >> b;
    c = addBinary(a,b);
    cout << " required result is : " << c << endl;
}

int addBinary(int a, int b)

{
    int ans = 0, rev;
    short int carry=0;

    while( a>0 && b>0 )
    {

        if( a % 10 == 0 && b % 10 == 0)
        {
            ans = ans * 10 + carry;
            carry = 0;
        }

        else if( (a % 10 == 0 && b % 10 == 1) || (a % 10 == 1 && b % 10 == 0))
        {
            if( carry == 1)
            ans = ans * 10 + 0;
            else
            ans = ans * 10 + 1;
        }

        else
        {
            ans = ans * 10 + carry;
            carry = 1;
        }
        a/=10;
        b/=10;
        
    }
    
    if( a > 0 )
    {
        while(a > 0)
        {
            if( a % 10 == 0)
            {
                ans = ans * 10 + carry;
                carry = 0;
            }
            else
            {
                if(carry == 1)
                {
                    ans = ans * 10 + 0;
                    carry = 1;
                }
                else
                {
                    ans = ans * 10 + 1;
                    carry = 0;
                }
            }
            a/=10;

        }
    }

    if( b > 0 )
    {
        while(b > 0)
        {
            if( b % 10 == 0)
            {
                ans = ans * 10 + carry;
                carry = 0;
            }
            else
            {
                if(carry == 1)
                {
                    ans = ans * 10 + 0;
                    carry = 1;
                }
                else
                {
                    ans = ans * 10 + 1;
                    carry = 0;
                }
            }
            b/=10;

        }
    }

    if( carry == 1)
    {
        ans = ans * 10 + 1;
    }

    rev = reverse(ans);
    return rev;
}

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

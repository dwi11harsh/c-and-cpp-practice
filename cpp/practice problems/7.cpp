// vowel or consonant

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"enter the character: ";
    cin>>a;

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    cout<<a<<" is vowel"<<endl;
    else
    cout<<a<<" is consonant"<<endl;
}
// binary to decimal using functions

#include<iostream>
#include<cmath>
using namespace std;


int bintodec(int a)
{
    int res,ans=0,i=0;
     while(a>0)
  {
      res=a%10;
      res=res*(pow(2,i));
      ans=ans+res;
      a=a/10;
      i++;

  }
  return ans;
}


int main()
{

  int a,ans;
  cout<<"enter the binary number: ";
  cin>>a;
  ans=bintodec(a); 
  cout<<ans<<endl;

}
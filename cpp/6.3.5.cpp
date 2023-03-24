// octal to decimal using functions

#include<iostream>
#include<cmath>
using namespace std;
int octtodec(int a)
{
    int res,ans=0,i=0;
     while(a>0)
  {
      res=a%10;
      res=res*(pow(8,i));
      ans=ans+res;
      a=a/10;
      i++;

  }
  return ans;
}
using namespace std;

int main()
{

  int a,ans;
  cout<<"enter the binary number: ";
  cin>>a;
  ans=octtodec(a); 
  cout<<ans<<endl;

}
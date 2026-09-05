#include <iostream>
using namespace std;

int power(int x,int n)
{
  int res=1;
  while(n>0)
  {
    if(n%2!=0)
    {
      res=res*x;
    }
    x=x*x;
    n=n/2;
  }
  return res;
}

int main()
{
  int x,n;
  cout<<"Enter the numbers=";
  cin>>x>>n;
  cout<<"The value of "<<x<<" to the power "<<n<<" is "<<power(x,n);
  return 0;
}
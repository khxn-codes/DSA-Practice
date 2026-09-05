#include <iostream>
using namespace std;

int power(int x,int n)
{
  int res=1;
  for(int i=0;i<n;i++)
  {
    res=res*x;
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
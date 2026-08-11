#include <iostream>
using namespace std;
int trailingZero(int n)
{
  int fact=1;
  if(n==0 || n==1)
  {
    return 1;
  }
  for(int i=2;i<=n;i++)
  {
    fact*=i;
  }
  int res=0;
  for(int i=5;i<=n;i=i*5)
  {
    res=res+n/i;
  }
  return res;
}
int main()
{
  int n;
  cout<<"Enter the number=";
  cin>>n;
  cout<<"The trailing Zero of "<<n<<" is "<<trailingZero(n);
  return 0;
}
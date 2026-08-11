#include <iostream>   //Naive Method
int trailingZero(int n)
{
  long long fact=1;
  if(n==0 || n==1)
  {
    return 1;
  }
  for(int i=2;i<=n;i++)
  {
    fact*=i;
  }
  int res=0;
  while(fact%10==0)
  {
    res++;
    fact/=10;
  }
  return res;
}
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number = ";
  cin>>num;
  cout<<"The Trailing Zero of "<<num<<" is "<<trailingZero(num);
  return 0;
}
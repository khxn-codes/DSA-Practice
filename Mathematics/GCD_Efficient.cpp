// By Basic Implementation of Euclidean Algorithm
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a,int b)
{
  int res=min(a,b);
  while(res>0)
  {
    if(a%res==0 && b%res==0)
    {
      break;
    }
    res--;
  }
  return res;
}
int main()
{
  int a,b;
  cout<<"Enter the numbers=";
  cin>>a>>b;
  cout<<"The GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
  return 0;
}
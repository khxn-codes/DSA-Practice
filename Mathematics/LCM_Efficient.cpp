#include <iostream>
#include <algorithm>
int gcd(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return gcd(b,a%b);
  }
}
int lcm(int a,int b)
{
  return (a*b)/gcd(a,b);
}
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter the numbers=";
  cin>>a>>b;
  cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b);
  return 0;
}
// By Basic Implementation of Euclidean Algorithm
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a,int b)
{
  while(a!=b)
  {
    if(a>b)
    {
      a=a-b;
    }
    else
    {
      b=b-a;
    }
    return a; //Both will be same at the end so return any one of them
  }
}
int main()
{
  int a,b;
  cout<<"Enter the numbers=";
  cin>>a>>b;
  cout<<"The GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
  return 0;
}

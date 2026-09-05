#include <iostream>
using namespace std;

int power(int x,int n)
{
  if(n==0)
  {
    return 1;
  }
  if(n%2==0)
  {
    return power(x,n/2)*power(x,n/2);
  }
  else
  {
    return x*power(x,n/2);
  }
}

int main()
{
  int x,n;
  cout<<"Enter the numbers=";
  cin>>x>>n;
  cout<<"The value of "<<x<<" to the power "<<n<<" is "<<power(x,n);
  return 0;
}
#include <iostream>
long long fact(int n)
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
  return fact;
}
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number = ";
  cin>>num;
  cout<<"The factorial of "<<num<<" is "<<fact(num);
  return 0;
}
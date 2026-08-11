#include <iostream>
using namespace std;
long long fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  return n*fact(n-1);
}
int main()
{
  int num;
  cout<<"Enter the number = ";
  cin>>num;
  cout<<"The factorial of "<<num<<" is "<<fact(num);
  return 0;
}
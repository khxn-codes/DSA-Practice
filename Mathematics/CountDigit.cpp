#include <iostream>
int countDigits(int n)
{
  int res=0;
  while(n>0)
  {
    n/=10;
    res++;
  }
  return res;
}
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number = ";
  cin>>num;
  cout<<"The count of digits of "<<num<<" is "<<countDigits(num);
  return 0;
}
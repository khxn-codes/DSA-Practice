#include <iostream>
bool palindromeCheck(int n)
{
  int temp=n;
  int rev=0;
  while(n>0)
  {
    int ld=n%10;
    n/=10;
    rev=rev*10+ld;
  }
  return (temp==rev);
}
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number = ";
  cin>>num;
  if(palindromeCheck(num))
  {
    cout<<"The number is Palindrome";
  }
  else
  {
    cout<<"Not Palindrome";
  }
  return 0;
}
#include <iostream>
using namespace std;

void isSet(int n,int k)
{
  int x=1;
  for(int i=0;i<(k-1);i++)
  {
    x=x*2;
  }
  if(n&x!=0)
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
}

int main()
{
  int n,k;
  cout<<"Enter the Numbers=";
  cin>>n>>k;
  isSet(n,k);
  return 0;
}

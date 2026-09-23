#include <iostream>
using namespace std;

int largestElement(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    bool flag=true;
    for(int j=0;j<n;j++)
    {
      if(arr[j]>arr[i])
      {
        flag=false;
        break;
      }
    }
    if(flag==true)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout<<"Enter the size of arrays=";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array="<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"The index of largest element is "<<largestElement(arr,n);
  return 0;
}
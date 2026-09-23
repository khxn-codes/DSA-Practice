#include <iostream>
using namespace std;

int secondLargest(int arr[],int n)
{
  int res=-1,largest=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>arr[largest])
    {
      res=largest;
      largest=i;
    }
    else if(arr[i]!=arr[largest])
    {
      if(res==-1 || arr[i]>arr[res])
      {
        res=i;
      }
    }
  }
  return res;
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
  cout<<"The index of second largest element is "<<secondLargest(arr,n);
  return 0;
}
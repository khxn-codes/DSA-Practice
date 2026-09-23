#include <iostream>
using namespace std;

int largestElement(int arr[],int n)
{
  int maxIdx=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>arr[maxIdx])
    {
      maxIdx=i;
    }
  }
  return maxIdx;
}

int secondLargest(int arr[],int n)
{
  int largest=largestElement(arr,n);
  int res=-1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=arr[largest])
    {
      if(res==-1)
      {
        res=i;
      }
      else if(arr[i]>arr[res])
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
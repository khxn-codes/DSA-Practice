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
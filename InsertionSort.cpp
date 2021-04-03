#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int length)
{
  int i,j,key;
  for(i=1;i<length;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>0&&arr[j]>key)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=key;
  }
}
void Print1Array(int arr[],int length)
{
  for(int i=0;i<length;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[]={2,45,12,67,43,89,43,98};
  int length;
  length=sizeof(arr)/sizeof(arr[0]);
  cout<<"Original Array is: ";
  Print1Array(arr,length);
  InsertionSort(arr,length);
  cout<<"Sorted array after insertion sort is:";
  Print1Array(arr,length);
}
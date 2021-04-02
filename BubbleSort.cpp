#include <bits/stdc++.h>
using namespace std;
void swap(int *xp,int *yp)
{
  int temp=*xp;
  *xp=*yp;
  *yp=temp;
}
void  Bubblesort(int arr[],int length)
{
  for(int i=0;i<length;i++)
  {
    for(int j=0;j<length;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}
void PrintArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
/*int main() {
  int arr[]={34,45,87,12,21,4,9,8,43};
  int arr1[]={34,45,87,12,21,4,9,8,43};
  int length;
  length=sizeof(arr)/sizeof(arr[0]);
  cout<<"Original Array is:";
  PrintArray(arr,length);
  Bubblesort(arr,length);
  cout<<"Sorted array is:";
  PrintArray(arr,length);
}*/
# include<bits/stdc++.h>
using namespace std;

void swap1(int *xp,int *yp)
{
    int temp;
    temp= *xp;
    *xp=*yp;
    *yp=temp;
}

void  SelectionSort(int arr[],int length)
{
  int i,j,min_idx;
  for(i=0;i<length-1;i++)
  {
    min_idx=i;
    for(int j=i+1;j<length;j++)
      if(arr[j]<arr[min_idx])
        min_idx=j;
      swap1(&arr[min_idx],&arr[i]);
  }
}
void PrintArray1(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
/*int main() {
  int arr[]={34,45,87,12,21,4,9,8,43,132};
  int length;
  length=sizeof(arr)/sizeof(arr[0]);
  cout<<"Original Array is:";
  PrintArray1(arr,length);
  SelectionSort(arr,length);
  cout<<"Sorted array is:";
  PrintArray1(arr,length);
}*/
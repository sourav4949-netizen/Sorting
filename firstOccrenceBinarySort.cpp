#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int a,int m,int n)
{
    int mid=(m+n)/2;
    if(m==n){
    return -1;}
    else if(arr[mid]>a)
    {binarySearch(arr,a,m,mid);}
    else if(arr[mid]<a)
    {binarySearch(arr,a,mid,n);}
    else if(arr[mid]==a)
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        return mid;
        else
        binarySearch(arr,a,m,mid);
    }
}

int main() {
	int arr[9]={10,13,20,34,34,78,79,84,89};
	int m=0;
	int n=9;
	int a=34;
	cout<<binarySearch(arr,a,m,n);
	return 0;
}
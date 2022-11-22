#include<bits/stdc++.h>
using namespace std;






void mergesort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int mid=s+(e-s)/2;
	
	mergesort(arr,0,mid-1);
	mergesort(arr,mid+1,e);
	
	merge(arr,0,e);
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int arr[5]={2,1,7,4,9};
	int size=5;
	
	
	mergesort(arr,0,size-1);
	print(arr,size);
	
}

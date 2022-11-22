#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid=s+(e-s)/2;
	
	int s1=mid-s+1;
	int s2=e-mid;
	
	int *arr1=new int[s1];
	int *arr2=new int[s2];
	
	int k=0;
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];
	}
	k=mid+1;
	for(int j=0;j<s2;j++)
	{
		arr2[j]=arr[k++];
	}
	int i=0,j=0;
	k=s;
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k++]=arr1[i++];
		}
		else
		{
			arr[k++]=arr2[j++];
		}
	}
	
	while(i<s1)
	{
		arr[k++]=arr1[i++];
	}
		
	while(j<s2)
	{
		arr[k++]=arr2[j++];
	}
}
void merge_sort(int arr[],int s,int e)
{
	if(s>e)
	{
		return;
	}
	
	int mid=s+(e-s)/2;
	
	merge_sort(arr,0,mid-1);
	merge_sort(arr,mid+1,e);
	
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
	int arr[6]={6,2,3,1,5,9};
	int size=6;
	merge_sort(arr,0,size-1);
	print(arr,size);
}

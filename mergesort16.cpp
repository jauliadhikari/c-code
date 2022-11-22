#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid=s+(e-s)/2;
	
	int s1=mid-s+1;
	int s2=e-mid;
	int i=0,j=0,k=s;
	int *arr1=new int[s1];
	int *arr2=new int[s2];
	
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];
	}
	k=mid+1;
	for(int j=0;j<s2;j++)
	{
		arr2[j]=arr[k++];
	}
	i=0;j=0;k=s;
	
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k++]=arr1[i++];
		}
		if(arr1[i]>arr2[j])
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
void mergeSort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int mid =s+(e-s)/2;
	
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	
	merge(arr,s,e);	
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[6]={2,14,6,7,19,10};
	int size=6;
	mergeSort(arr,0,size-1);
	print(arr,size);	
}

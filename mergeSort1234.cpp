#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid=s+(e-s)/2;
	int s1= mid-s+1;
	int s2 = e-mid;
	
	int arr1[s1];
	int arr2[s2];
	
	int k = s;
	
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];	
	} 
	k = mid+1;
	for(int j=0;j<s2;j++)
	{
		arr2[j]=arr[k++];	
	}         
	
	int i=0;
	int j=0;
	k=s;
	
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k++]=arr1[i++];
		}
		else
		{
			arr[k++]= arr2[j++];
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
	int mid = s+(e-s)/2;
	mergeSort(arr,0,mid);
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
	int arr[5]={5,4,3,2,1};
	int size=5;
	mergeSort(arr,0,size-1);
	print(arr,size);
}

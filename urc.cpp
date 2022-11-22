#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid = s+(e-s)/2;
	
	int s1 = mid-s+1;
	int s2 = e-mid;
	
	int* arr1 = new int[s1];
	int* arr2 = new int[s2];
	int k =s;
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];	
	}
	for(int i=0;i<s2;i++)
	{
		arr2[i]=arr[k++];	
	}	
	
	int i =0;
	int j =0;
	k =s;		
	
	
	while(i<s1&&j<s2)
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
void mergesort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	
	int mid=s+(e-s)/2;
	
	mergesort(arr,s,mid);
	
	mergesort(arr,mid+1,e);
	
	merge(arr,s,e);
	
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[7]={4,9,1,11,78,6,3};
	int n = 7;
	
	mergesort(arr,0,n-1);
	
	print(arr,n);
}

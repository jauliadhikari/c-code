#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid = s+(e-s)/2;
	
	int s1 = mid-s+1;
	int s2 = e-mid;
	
	int* arr1 = new int[s1];
	int* arr2 = new  int[s2];
	
	int k = s;
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k];
		k++;
	}
	k = mid+1;
	for(int i=0;i<s2;i++)
	{
		arr2[i]=arr[k];
		k++;
	}
	
	int j = 0;
	int p = 0;
	k =s;
	while(j<s1 && p<s2)
	{
		if(arr1[j]<arr2[p])
		{
			arr[k++]= arr1[j++];
		}
		else
		{
			arr[k++] = arr2[p++];
		}
	}
	while(j<s1)
	{
		arr[k++]=arr1[j++];
	}
	while(p<s2)
	{
		arr[k++]=arr2[p++];
	}
	
}
void mergeSort(int arr[],int s,int e)
{
	//base case
	if(s>=e)
	{
		return;
	}
	int mid = s+(e-s)/2;
	
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
	int arr[8]={5,4,3,12,34,23,11,2};
	int n = 8;
	
	mergeSort(arr,0,n-1);
	
	print(arr,n);
	
}

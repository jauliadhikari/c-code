#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid = s+(e-s)/2;
	
	int l1 = mid-s+1;
	int l2 = e-mid;
	
	int* arr1 = new int[l1];
	int* arr2 = new int[l2];
	
	int k = s;
	
	for(int i=0;i<l1;i++)
	{
		arr1[i]=arr[k++];
	}
	k = mid+1;
	for(int i =0;i<l2;i++)
	{
		arr2[i]=arr[k++];
	} 
	
	int fr =0;
	int se = 0;
	k = s;
	
	while(fr<l1  && se<l2)
	{
		if(arr1[fr]<arr2[se])
		{
			arr[k++] = arr1[fr++];
		}
		else
		{
			arr[k++] = arr2[se++];
		}
	}
	
	while(fr<l1)
	{
		arr[k++] = arr1[fr++];
	}
	while(se<l2)
	{
		arr[k++] = arr2[se++];
	}
}
void mergeSort(int arr[],int s,int e)
{
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
	int arr[5] = {5,4,3,2,1};
	
	int n = 5;
	mergeSort(arr,0,n-1);
	
	print(arr,5);
}

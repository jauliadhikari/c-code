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
	for(int i = 0;i<s1;i++)
	{
		arr1[i] = arr[k++];
	}
	k = mid+1;
	for(int i =0;i<s2;i++)
	{
		arr2[i] = arr[k++];
	}
	int f =0;
	int se = 0;
	k =s;
	while(f<s1 && se<s2)
	{
		if(arr1[f]<arr2[se])
		{
			arr[k++] = arr1[f++];
		}
		else
		{
			arr[k++] = arr2[se++];
		}
	}
	while(f<s1)
	{
		arr[k++] = arr1[f++];
	}
	while(se<s2)
	{
		arr[k++] = arr2[se++];
	}
}
void MergeSort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int mid = s+(e-s)/2;
	
	MergeSort(arr,s,mid);
	MergeSort(arr,mid+1,e);
	
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
	int arr[5]={8,4,6,2,1};
	int n=5;
	MergeSort(arr,0,n-1);
	print(arr,n);
}

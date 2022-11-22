//1. merge sort
//2. insertion
//3. binary search 
//4. linear search by recursion
//5. binary seach by recusion
// reverse a linked list
// check plaindrome linked list
#include<iostream>
using namespace std;
void Merge(int arr[],int s,int e)
{   
	int mid = s+(e-s)/2;
	
	int s1 = mid-s+1;
	int s2 = e-mid;
	
	int* arr1 = new int[s1];
	int* arr2 = new int[s2];
	
	int k = s;
	
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
	k =s;
	while(i<s1 && j<s2)
	{
		if(arr1[i] < arr2[j])
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
void MergeSort(int arr[],int s,int e)
{
    if(s>=e)
    {
    	return ;
	}
	int mid=s+(e-s)/2;
	MergeSort(arr,s,mid);
	MergeSort(arr,mid+1,e);
	
	Merge(arr,s,e);
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
	int arr[9]={2,0,1,5,3,8,6,7,4};
	int n=9;
	MergeSort(arr,0,n-1);
	print(arr,n);
	
}

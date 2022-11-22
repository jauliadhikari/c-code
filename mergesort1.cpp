#include<iostream>
using namespace std;

void Merge(int arr[],int s,int e)
{
	int mid=s+(e-s)/2;
	int s1=mid-s+1;
	int s2=e-mid;
	
	int* arr1=new int(s1);
	int* arr2=new int(s2);
	int k=s;
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];
	}
	k=mid+1;
	for(int j=0;j<s2;j++)
	{
		arr2[j]=arr[k++];
	}
	
	int j=0,p=0;
	k=s;
	while(j<s1 && p<s2)
	{
		if(arr1[j]<arr2[p])
		{
			arr[k++]=arr1[j++];
		}
		else
		{
			arr[k++]=arr2[p++];
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
void Mergesort(int arr[],int s,int e)
{
	//base case
	if(s>=e)
	{
		return;
	}
	int mid=s+(e-s)/2;
	Mergesort(arr,s,mid);
	Mergesort(arr,mid+1,e);
	Merge(arr,s,e);
	
}
void Print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={34,23,12,89,56};
	int n=5;
	Mergesort(arr,0,n-1);
	Print(arr,n);
}


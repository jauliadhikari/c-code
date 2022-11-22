#include<iostream>
using namespace std;
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
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
	
	k = mid+1;
	
	for(int i =0;i<s2;i++)
	{
		arr2[i]=arr[k++];
	}
	
	int i=0;
	int j=0;
	k = s;
	
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k++] = arr1[i++];
		}
		
		else
		{
			arr[k++]=arr2[j++];
		}
	}
	while(i<s1)
	{
		arr[k++] = arr1[i++];
	}
	
	while(j<s2)
	{
		arr[k++]=arr2[j++];
	}
	
}

void Mergesort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	
	// left part
	int mid = s+(e-s)/2;
	Mergesort(arr,s,mid);
	
	// right part
	
	Mergesort(arr,mid+1,e);
	
	merge(arr,s,e);
}

int main()
{
	int arr[7]={1,5,3,9,2,12,10};
	
	int size = 7;

	Mergesort(arr,0,size-1);
	
	print(arr,size);

}


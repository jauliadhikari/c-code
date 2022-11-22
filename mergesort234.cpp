#include<iostream>
using namespace std;
void Merge(int arr[],int s,int e )
{
	int mid=s+(e-s)/2;
	int s1=mid-s+1;
	int s2=e-mid;
	int* arr1=new int[s1];
	int* arr2=new int[s2];
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
	
	
	
	
	int i=0,j=0;
	k=s;
	while(i<s1 && j<s2)
	{
		if(arr1[i]>arr2[j])
		{
			arr[k++]=arr2[j++];
		}
		else
		{
		    arr[k++]=arr1[i++];	
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
void Merge_Sort(int arr[],int s,int e)
{  
    if(s>=e)
    {
    	return;
	}
	int mid=s+(e-s)/2;
	Merge_Sort(arr,s,mid);
	Merge_Sort(arr,mid+1,e);
	Merge(arr,s,e);
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
	int arr[8]={2,1,9,7,5,10,91,43};
		int size =8;
		
		Merge_Sort(arr,0,size-1);
		
		print(arr,8);
}

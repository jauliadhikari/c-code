#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{   
    int mid=s+(e-s)/2;
	int s1=mid-s+1;
	int s2 = e-mid;
	
	int* arr1= new int[s1];              
	int* arr2= new int[s2];
	
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
	
	int x=0,y=0;
	k=s;
    while(x<s1 && y<s2)
	{
		if(arr1[x]<arr2[y])
		{
			arr[k++]=arr1[x++];
		}
		else
		{
			arr[k++]=arr2[y++];
		}
	}
	while(x<s1)
	{
		arr[k++]=arr1[x++];
	}
	while(y<s2)
	{
		arr[k++]=arr2[y++];
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
    for(int i=0;i<size;i++)
    {
    	cout<<arr[i]<<endl;
	}
	
}                                 
int main()
{
	int arr[5]={6,3,1,9,2};
	mergesort(arr,0,5-1);
	print(arr,5);
}


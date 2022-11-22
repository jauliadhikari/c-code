#include<iostream>  
using namespace std;
int fo(int arr[],int size,int key)
{ 
	int start = 0;
	int end = size-1;
	
	int mid = start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
		 	end = mid-1;
		}
		else if(arr[mid]<key)
		{
			start = mid+1;
		}
		else if(arr[mid]>key)
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	
	}
	return ans;
}
int lo(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	
	int mid = start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			start = mid+1;
		}
		if(arr[mid]<key)
		{
			start = mid+1;
		}
		if(arr[mid]>key)
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	
	}
	return ans;
}
int main()
{
	int arr[5]={1,2,2,2,2};
	
	cout<<fo(arr,5,2)<<" ";
	
	cout<<lo(arr,5,2);
	
}

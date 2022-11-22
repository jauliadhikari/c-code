#include<bits/stdc++.h>
using namespace std;
int fo(int arr[],int size,int key)
{
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	int ans=0;
    while(s<=e)	
	{
	
	if(arr[mid]==key)
	{
		ans=mid;
		e=mid-1;
	}
	if(arr[mid]>key)
	{
		e=mid-1;
	}
	if(arr[mid]<key)
	{
		s=mid+1;
	}
	mid=s+(e-s)/2;
    }
    return ans;
}
int lo(int arr[],int size,int key)
{
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	int ans=0;
	
    while(s<=e)	
	{
	
	if(arr[mid]==key)
	{
		ans=mid;
	    s=mid+1;
	}
	if(arr[mid]>key)
	{
		e=mid-1;
	}
	if(arr[mid]<key)
	{
		s=mid+1;
	}
	mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
	int arr[7]={2,3,5,6,8,8,9};
	int size=7;
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	cout<<"first occr"<<fo(arr,size,8)<<endl;
	cout<<"last occr"<<lo(arr,size,8)<<endl
	
	78  7z;
}

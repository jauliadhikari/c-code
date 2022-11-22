#include<bits/stdc++.h>
using namespace std;
int fo(int arr[],int size,int key)
{
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<e)
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
	else if(arr[mid]<key)
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
	int mid=s+(e-s)/2,ans=-1;
	while(s<e)
	{
	if(arr[mid]==key)
	{
	   ans=mid;
	   s=mid+1;
	}
	else if(arr[mid]>key)
	{
		e=mid-1;
	}
	else
	{
		s=mid+1;
	}
	mid=s+(e-s)/2;
   }
   return ans;

}
int main()
{
	int arr[5]={1,4,4,4,6};
	int size=6;
	int s=0,e=size-1;
	int key;
	cin>>key;
	cout<<fo(arr,size,key);
	cout<<lo(arr,size,key);
}

#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int s,int e,int key)
{
	
	if(s>=e)
	{
		return -1;
	}
	
	int mid=s+(e-s)/2;
	
	if(arr[mid]==key)
	{
		return mid;
	}
	if(arr[mid]>key)
	{
		return bs(arr,s,mid-1,key);
	}
	if(arr[mid]<key)
	{
		return bs(arr,mid+1,e,key);
	}
	
	
}
int main()
{
	int arr[6]={2,4,6,8,9,10};
	int size=6;
	int key,s=0,e=size-1;
	cin>>key;
	cout<<bs(arr,s,e,key);
}

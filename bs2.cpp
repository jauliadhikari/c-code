#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int s,int e,int key)
{
	int size=5;
	if(s>e)
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
		return bs(arr+1,s,mid-1,key);
	}
	
	if(arr[mid]<key)
	{
		return bs(arr+1,mid+1,e,key);
	}
}
int main()
{
	int arr[5]={1,4,4,6,8};
	int size=5;
	int s=0;
	int e=size-1;
	int key;
	cin>>key;
	if(bs(arr,s,e,key)==true)
	{
		cout<<"p"<<endl;
	}
	else
	{
		cout<<"not p"<<endl;
	}
}

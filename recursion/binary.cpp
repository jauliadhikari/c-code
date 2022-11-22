#include<iostream>
using namespace std;
int bs(int arr[],int s,int e,int key)
{
	int mid=s+(e-s)/2;
	
	if(s>e)
	{
		return -1;
	}
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
	int arr[5]={1,2,3,4,5};
	int key,s=0,size=5;
	cin>>key;
	cout<<bs(arr,s,size-1,key);
}

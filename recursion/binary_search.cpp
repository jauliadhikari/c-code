#include<iostream>
using namespace std;
int bc(int arr[],int s,int e,int key)
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
		return	bc(arr,s,mid-1,key);
	}
	if(arr[mid]<key)
	{
		return bc(arr,mid+1,e,key);
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;#include<iostream>
using namespace std;
int bc(int arr[],int s,int e,int key)
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
		return	bc(arr,s,mid-1,key);
	}
	if(arr[mid]<key)
	{
		return bc(arr,mid+1,e,key);
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	int key;
	cin>>key;
	cout<<bc(arr,0,4,key);
}
	int key;
	cin>>key;
	cout<<bc(arr,0,4,key);
}

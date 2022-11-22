#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+end-start/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+end-start/2;
	}
	return -1;
}
int binary1(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+end-start/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+end-start/2;
	}
	return -1;
}
int main()
{
	
	cout<<"enter size"<<endl;
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"enter key";
	cin>>key;
	if(arr[0]>arr[1])
	{   
		cout<<binary1(arr,size,key);
	}
	else
	{
		cout<<binary(arr,size,key);
	}
	
	
}

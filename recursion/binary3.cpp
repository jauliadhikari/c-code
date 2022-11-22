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
	
	return -1;
}
int main()
{
	int arr[5]={2,4,6,8,10};
	int size=5;
	int key;
	cin>>key;
	
	cout<<bs(arr,0,size-1,key);
}

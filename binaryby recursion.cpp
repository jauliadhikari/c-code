#include<iostream>
using namespace std;
bool bs(int arr[],int s,int e,int key)
{
	if(s>e)
	{
		return false;
	}
	int mid=s+(e-s)/2;
	if(arr[mid]==key)
	{
		return true;
	}
	if(arr[mid]<key)
	{
		return bs(arr,mid+1,e,key);
	}
	if(arr[mid]>key)
	{
		return bs(arr,s,mid-1,key);
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size = 5;
	int key = 2;
	cout<<bs(arr,0,size,key);
}

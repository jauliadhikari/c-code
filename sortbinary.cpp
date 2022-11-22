#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	
	while(s<e)
	{
		if(arr[0]<=arr[mid])
		{
			s=mid+1;
		}
		else
		{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}
int bs(int arr[],int s,int e,int key)
{
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[mid]<key)
		{
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}
int main()
{
int arr[8]={5,6,7,8,1,2,3,4};
	int size= 8;
	int min  = pivot(arr,8);
	int key;
	cin>>key;
	int ls = bs(arr,0,min-1,key);	
	int rs  = bs(arr,min,size-1,key);
	
	
	if(ls>rs)
	{
		cout<<ls<<endl;
	}
	else
	{
		cout<<rs<<endl;
	}
}

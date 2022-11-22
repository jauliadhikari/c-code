#include<iostream>
using namespace std;
int first(int arr[],int key,int size)
{
	int start=0;
	int end=size-1;
	int mid = start+(end-start)/2;
	int ans;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
		  ans=mid;
		  end=mid-1;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int last(int arr[],int key,int size)
{
	int start=0;
	int end=size-1;
	int ans;
	int mid = start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int binary(int arr[],int key,int size)
{
	int start=0;
	int end=size-1;
	int mid = start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}
int main()
{
	int arr[8]={23,56,56,56,78,79,83,90};
	int key;
	cout<<"enter the key search value : "<<endl;
	cin>>key;
	int u=binary(arr,key,8);
	
	if(u!= -1)
	{
	int f=first(arr,key,8);
	int l=last(arr,key,8);
	if(f==l)
	{
		cout<<" unique "<<endl;
	}
	else 
	{
	   int return1= l-f + 1;
	   cout<<"number of occurence : "<<return1<<endl;
	}}
   else
   {
   	cout<<"num is not in the array"<<endl;
   }
}




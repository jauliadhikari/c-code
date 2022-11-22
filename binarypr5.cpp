#include<iostream>
using namespace std;
int binary1(int arr[],int size,int key)
{ 
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
    	if(arr[mid]==key)
    	{
    		cout<<"yes present"<<endl;
    		return 0;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
		
	} cout<<"not present "<<endl;
	
}
int binary2(int arr[],int size,int key)
{ 
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
    	if(arr[mid]==key)
    	{
    		cout<<"yes present at index :"<<mid<<endl;
    		return 0;
		}
		else if(key>arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
		
	} cout<<"NOt presetn "<<endl;
	
}
void ls(int arr[],int size,int key)
{
	for(int i =0;i<size;i++)
	{
		if(arr[i]==key)
		{
			cout<<"yes present at index :"<<i<<endl;
		}
	}
}
int main()
{   
    int size;
    cout<<"eneter the size of the array :"<<endl;
    cin>>size;
	int arr[size];
	int key=0;
	cout<<"eEnter elements in array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter key element"<<endl;
	cin>>key;
	if(arr[0]>arr[1])
	{
	   binary2(arr,size,key);
	}
	else if(arr[0]<arr[1])
	{
		binary1(arr,size,key);
	}
	else
	{
		ls(arr,size,key);
	}
}

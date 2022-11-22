#include<iostream>
using namespace std;
int binaryase(int arr[],int size,int key)
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
			end=mid-1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		mid=start+end-start/2;
	} return -1;
}

int binaryds(int arr[],int size,int key)
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
		else if(key>arr[mid])
		{
			end=mid-1;
		}
		else if(key<arr[mid])
		{
			start=mid+1;
		}
		mid=start+end-start/2;
	} return -1;
	
}

int main()
{   int arr[5],key;
    for(int i=0;i<5;i++)
    {
    	cin>>arr[i];
	}
	cout<<"enter key "<<endl;
	cin>>key;
	if(arr[0]<arr[1])
	{
	 cout<<"index is  "<<binaryase(arr,5,key)<<endl;
	}
	else
	{
	cout<<"index is  "<<binaryds(arr,5,key)<<endl;
    }
  

}

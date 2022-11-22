#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
		int s=0,e=arr[size-1];
		int mid=s+(e-s)/2;
		while(s<=e)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	
	cout<<binary(arr,5,5);
	
	
}

#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
}
int main()
{
	int arr[5]={2,8,20,23,45};
	cout<<binary(arr,5,8);
}


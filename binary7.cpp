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
		if(key<arr[mid])
		   {
			end=mid-1;
		   }
		else
	    	{
			start=mid+1;
		    }
		mid=start+(end-start)/2;
	}
	return -1;
}
int main()
{
	int arr[5]={23,45,56,67,78};
	cout<<"index num of enter value "<<binary(arr,5,78)<<endl;
}


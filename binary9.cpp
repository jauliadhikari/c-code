#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key)
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
	int arr[5]={1,3,5,7,9};
	cout<<"num is present at index num -> "<<binary(arr,5,7);
}

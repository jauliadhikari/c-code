#include<iostream>
using namespace std;
int bs(int arr[],int s,int e,int key)
{
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
	    else if(arr[mid]>key)
	    {
	    	e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}
int main()
{
	int arr[5]={4,8,9,90,122};
	int size=5;
    cout<<bs(arr,0,size-1,90);
	
}

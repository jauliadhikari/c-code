#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int size)
{
	int s = 0;
	int e = size-1;
	
	int mid = s+(e-s)/2;
	
	while(s<=e)
	{
		if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1])
		{
			return mid;
		}
		
		if(arr[s]<=arr[mid])
		{
			s = mid;
		}
		
		if(arr[mid]<= arr[e])
		{
			e = mid;			
		}
		mid = s+(e-s)/2;
	}
	return -1;
}



int main()
{
	int arr[8]={11,25,32,100,2,4,6,8};
	
	int count = bs(arr,8);
	
	cout<<count;
}

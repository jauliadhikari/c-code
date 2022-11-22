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
int main()
{
	int arr[8]={8,10,17,1,2,3};
	int size=8;
	cout<<pivot(arr,size);
}

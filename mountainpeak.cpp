#include<iostream>
using namespace std;
int peak(int arr[],int size)
{
	int s =0;
	int e = size-1;
	int mid = s+(e-s)/2;
	
	while(s<e)
	{
		if(arr[mid]<arr[mid+1])
		{
			s=mid+1;
		}
		else
		{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return mid;
}
int main()
{
	int arr[4]={0,10,5,2};
	int max = peak(arr,4);
	cout<<arr[max]<<endl;
}

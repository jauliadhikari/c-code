#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
	
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start!=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key>arr[mid])
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
    int arr[5]={45,78,89,90,95};
    cout<<binary(arr,5,90)<<endl;
	
}

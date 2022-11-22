#include<iostream>
using namespace std;
int fo(int arr[],int s,int e,int k)
{
	int mid = s+(e-s)/2;
	int ans = -1;
	if(s>e)
	{
		return ans;
	}
	
	if(arr[mid]==k)
	{
		ans = mid;
		return fo(arr,s,mid,k);
	}
	if(arr[mid]>k)
	{
		return	fo(arr,s,mid-1,k);
	}
	if(arr[mid]<k)
	{
		return fo(arr,mid+1,e,k);
	}
	
}
int main()
{
	int arr[5]={1,4,4,5,5};
	int size=5;
	int key;
	cin>>key;
	cout<<fo(arr,0,4,key);
	
	
}

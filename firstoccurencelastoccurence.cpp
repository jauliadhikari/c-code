#include<iostream>
using namespace std;
int focc(int arr[],int size,int key)
{  
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	int ans =0;
	while(s<e)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			e = mid-1;
		}
		if(key<arr[mid])
		{
			e=mid-1;
		}
		else if(key>arr[mid])
	    {
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans; 
}
int locc(int arr[],int size,int key)
{  
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	int ans =0;
	while(s<e)
	{
		if(arr[mid]==key)
		{
			ans =mid;
			s = mid + 1;
		}
		if(key<arr[mid])
		{
			e=mid-1;
		}
		else if(key>arr[mid])
	    {
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans; 
}

int main()
{
	int arr[7]={1,3,3,3,5,6,7};
	
	cout<<focc(arr,7,3)<<endl;
	
	cout<<locc(arr,7,3)<<endl;
	int fo = focc(arr,7,3);
	int lo = locc(arr,7,3);
	
	int noc = lo-fo+1;
	
	cout<<"number of occ "<<noc<<endl;
	
	
}

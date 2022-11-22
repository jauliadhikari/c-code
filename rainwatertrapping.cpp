//arr= {3,0,1,2,5}
// water = water + min(lmax,rmax) - arr[i];
#include<iostream>
using namespace std;
int rain(int arr[],int n)
{
	int lmax ,rmax;
	int water=0;
	for(int i=1;i<n-1;i++)
	{
		lmax = arr[i];
		for(int j =0;j<i;j++)
		{
			lmax = max(lmax,arr[j]);	
		}
		rmax = arr[i];
		for(int j=i+1;j<n;j++)
		{
			rmax = max(rmax,arr[j]);
		}
		
		water = water + min(lmax,rmax)-arr[i];
	}
	return water;
	
}
int main()
{
	int arr[5]={3,0,1,2,5};
	
	cout<<rain(arr,5);
	
	
}

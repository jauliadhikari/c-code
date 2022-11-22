#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int size)
{
	static int maxx = INT_MIN;
	if(size==0)
	{
		return maxx;
	}
	if(arr[0]>maxx)
	{
		maxx = arr[0];
	}
	
	
	return maxi(arr+1,size-1);
}
int main()
{
	int arr[5]={1,2,10,4,5};
	int size=5;
	
    cout<<maxi(arr,5);
	
}

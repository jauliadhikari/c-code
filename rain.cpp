#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{   int lmax=0,rmax=0,water=0;
	vector <int> arr;
	for(int i=0;i<5;i++)
	{   int x;
	    cin>>x;
		arr.push_back(x);
	}
	
	for(int i=1;i<arr.size()-1;i++)
	{
		lmax=arr[i];
		for(int j=0;j<i;j++)
		{
			lmax=max(lmax,arr[j]);
		}
		rmax=arr[i];
		for(int j=i+1;j<arr.size();j++)
		{
			rmax=max(rmax,arr[j]);
		}
		water = water + min(lmax,rmax)-arr[i];
	}
	cout<<water;
}

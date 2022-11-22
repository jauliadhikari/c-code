#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int bs(vector<int> arr,int key)
{
	int size = arr.size();
	
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		
		if(arr[mid]>key)
		{
			end = mid-1;
		}
		
		else if(arr[mid]<key)
		{
			start = mid+1;
		}
		
		mid = start+(end-start)/2;
	}
	
	return -1;
}
int main()
{
	vector<int> arr;
	int d=0;
	for(int i=0;i<5;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	int key;
	cout<<"enter  key bhai shab "<<endl;
	cin>>key;
	cout<<bs(arr,key);
}

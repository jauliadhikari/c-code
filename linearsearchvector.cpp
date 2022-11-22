#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int ls(vector<int> arr,int key)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
		
	} return -1;
}

int main()
{
	vector<int> arr;
	int d,key;
	for(int i=0;i<1000;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	cout<<"enter key element"<<endl;
	cin>>key;
	cout<<ls(arr,key);
	
}

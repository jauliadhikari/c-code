#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector <int> arr;
	int x,temp=0;
	for(int i=0;i<5;i++)
	{
		cin>>x;
		arr.push_back(x);
		
	} 
	sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {
	cout<<arr[i]<<endl;
    }
	
	cout<<"Enter the kth value : "<<endl;
	
	int k;
	
	cin>>k;
	
	int n = arr.size();
	
	cout<<arr[n-k];
}

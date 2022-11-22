#include<bits/stdc++.h>
using namespace std;
void is_p(int arr[],int size)
{
	if(size==0)
	{
		return;
	}
	if(arr[1]-arr[0]==0)
	{
		int count=arr[0];
		cout<<count<<"dublicate"<<endl;
	}
	int result=arr[1]-arr[0];
	if(arr[1]-arr[0]>1)
	{
		cout<<arr[0]+1<<"missing"<<endl;
		cout<<(arr[0]+result )-1<<"mising"<<endl;
	}
	
	is_p(arr+1,size-1);
}
int main()
{
	int arr[5];
	int size=5;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+size);
	
	is_p(arr,size);
}

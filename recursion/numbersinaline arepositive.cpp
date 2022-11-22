#include<bits/stdc++.h>
using namespace std;
void negative(int arr[],int size)
{
	int temp=0;
	if(size==0)
	{
		return;
	}
	
	if(arr[0]<temp)
	{
		cout<<arr[0]<<endl;
	}
	
	negative(arr+1,size-1);
	
	if(arr[0]>temp)
	{
		cout<<arr[0]<<endl;
	}
}
int main()
{
	int arr[5]={2,5,-1,4,-2};
	int size=5;
	negative(arr,size);
}

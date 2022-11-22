#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int s, int e)
{
	if(s>e)
	{
		return;
	}
	
	swap(arr[s],arr[e]);
	
	rev(arr,s+1,e-1);
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[6]={2,5,3,9,1,22};
    	
    	
    	rev(arr,0,5);
	print(arr,6);
}

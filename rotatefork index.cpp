#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int s,int e)
{
	
	while(s<=e)
	{
		swap(arr[s++],arr[e--]);
	}
}
void rotate(int arr[],int size,int k)
{
	rev(arr,0,size-(k+1));
	rev(arr,size-k,size-1);
	rev(arr,0,size-1);
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
	int arr[6]={4,1,2,8,7,3};
	int size=6;
	rotate(arr,size,2);
	print(arr,size);
	
}

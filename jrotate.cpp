#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int s,int e)
{   
	while(s<=e)
	{
		swap(arr[s++],arr[e--]);
	}
}
void rotate(int arr[],int size,int k)
{
	
	reverse(arr,0,size-k+1);
	reverse(arr,size-k,size);
	reverse(arr,0,size-1);
	
	
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
	int arr[6]={3,1,5,4,2,9};
	int size=6;
	int k=2;
	rotate(arr,size,k);
	print(arr,size);
}

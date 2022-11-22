// 1,2,3,4,5,6    6,1,2,3,4,5  k=2    5,6,1,2,3,4
#include<iostream>
#include<vector>
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
	int arr[6];
	
	cout<<"enter the array elements :"<<endl;
	
	for(int i=0;i<6;i++)
	{
		cin>>arr[0];
	}
	
	rotate(arr,6,2);
	print(arr,6);
	
}

  

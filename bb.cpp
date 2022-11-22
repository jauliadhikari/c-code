#include<iostream>
using namespace std;
void bub(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
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
	int arr[5]={3,11,20,9,2};
	int size=5;
	
	bub(arr,size);
	print(arr,size);
	
}

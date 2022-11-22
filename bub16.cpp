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
				swap(arr[j+1],arr[j]);
			}
		}
		
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={1,4,2,7,6};
	int size=5;
	bub(arr,size);
	print(arr,size);
	
	
}

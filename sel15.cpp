#include<iostream>
using namespace std;
void sel(int arr[],int size)
{    
    int min,j;
	for(int i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			
		}swap(arr[min],arr[i]);
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
	int arr[5]={12,54,98,11,32};
	int size=5;
	sel(arr,size);
	print(arr,size);
}

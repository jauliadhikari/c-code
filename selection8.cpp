#include<iostream>
using namespace std;
void sel(int arr[],int size)
{
	int min=0,j;
	for(int i=0;i<size-1;i++)
	{    min=i;
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
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={3,2,9,7,6};
	sel(arr,5);
	print(arr,5);
	
}

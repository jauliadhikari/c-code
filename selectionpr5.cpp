#include<iostream>
using namespace std;
void selection(int arr[],int size)
{   int min;
	for(int i=0;i<size;i++)
	{   min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		swap(arr[min],arr[i]);
	}
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[4]={8,4,0,5};
	
	selection(arr,4);
	print(arr,4);
}

#include<iostream>
using namespace std;
void bubble(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
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
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={34,23,12,11,45};
	bubble(arr,5);
	print(arr,5);
}

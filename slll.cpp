#include<iostream>
using namespace std;
void sel(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{   
	    int min=i;
		for (int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		} swap(arr[min],arr[i]);
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[7]={23,12,56,45,34,89,29};
	sel(arr,7);
	print(arr,7);
}




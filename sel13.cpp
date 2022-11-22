#include<iostream>
using namespace std;
void sel(int arr[],int size)
{   
    int min=0;
	for(int i=0;i<size;i++)
	{
		min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(arr[min],arr[i]);
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
	int arr[5]={2,1,6,4,3};
	int size=5;
	sel(arr,size);
	print(arr,size);
	
}

#include<iostream>
using namespace std;
void sel(int arr[],int size)
{
	int min=0,j;
	for(int i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			
		}swap(arr[i],arr[min]);
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
	int arr[5]={1,4,2,8,7};
	int size=5;
	
	sel(arr,size);
	print(arr,size);
}

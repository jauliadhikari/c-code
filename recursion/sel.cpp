#include<iostream>
using namespace std;
void sel(int arr[],int size)
{   
    
	for(int i=0;i<size-1;i++)
	{   int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
			
		}
		swap(arr[i],arr[min]);
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
	int arr[6]={1,5,8,9,3,4};
	int size=6;
	sel(arr,size);
	print(arr,size);
}

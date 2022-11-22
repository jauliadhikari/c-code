#include<iostream>
using namespace std;
void parth(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
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
	int arr[7]={23,90,78,67,56,98,61};
	parth(arr,7);
	print(arr,7);
	
}

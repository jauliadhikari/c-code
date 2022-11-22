#include<iostream>
using namespace std;
void insertion(int arr[],int size)
{   int min=0;
	for(int i=0;i<size;i++)
	{   min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
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
    int arr[7]={1,6,4,3,7,2,21};
    insertion(arr,7);
    print(arr,7);
	
}

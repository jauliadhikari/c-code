#include<iostream>
using namespace std;
void sel(int arr[],int size);
void print(int arr[],int size);
int main()
{
	int arr[5]={5,4,3,2,1};
	sel(arr,5);
	print(arr,5);
}
void sel(int arr[],int size)
{   int min;
	for(int i=0;i<size-1;i++)
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
		cout<<arr[i]<<endl;
	}
	
}

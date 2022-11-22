#include<iostream>
using namespace std;
void sel(int arr[],int size)
{   int min,j;
	for(int i=0;i<size-1;i++)
	{  min=i;
       for(int j=i+1;j<size;j++)
	   {
	   	 if(arr[min]>arr[j])
	   	{
	   	    min=j;
		}
	   } swap(arr[min],arr[i]);
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
	int arr[5]={23,12,45,21,50};
	sel(arr,5);
	print(arr,5);
}

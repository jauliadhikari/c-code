#include<iostream>
using namespace std; 
void sel(int arr[],int size)
{   int min;
	for(int i=0;i<size;i++)
	{   min=i;
	  for(int j=i+1;j<size;j++)
	  {
	  	if(arr[j]<arr[min])
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
int main()
{
	int arr[7]={34,23,12,45,37,89,9};
	sel(arr,7);
	print(arr,7);
}

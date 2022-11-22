#include<iostream>
using namespace std;
void sel(int arr[],int size)
{   int min,j;
	for(int i=0;i<size-1;i++)
	{    
	   min=i;
	   for(j=i+1;j<size;j++)
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
    int arr[5]={34,89,-9,67,42};
    sel(arr,5);
    print(arr,5);
}

#include<iostream>
using namespace std;
void selection(int arr[],int size)
{    int min,j;
    for(int i=0;i<size-1;i++)
    {   min=i;
    	
    	for( j=i+1;j<size;j++)
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
int main()
{
	int arr[5]={56,45,34,26,2};
	selection(arr,5);
	print(arr,5);
}

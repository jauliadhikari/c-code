#include<iostream>
using namespace std;
void bubble(int arr[],int size)
{
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{  
			    swap(arr[j],arr[j+1]);
			
			}
		}
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
    int arr[7]={23,56,89,9,78,34,12};
    bubble(arr,7);
    print(arr,7);
	
}







